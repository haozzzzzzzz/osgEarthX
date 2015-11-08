/**
	@brief 项目中连接点的基本模板
	@author Hao Luo
	@date 2014/12/10
*/

#ifndef I_EARTH_DISP_CP_H
#define I_EARTH_DISP_CP_H 1

template <class T, const IID*piid>
class CProxyIEarthDisp:
	public ATL::IConnectionPointImpl<T,piid>
{
protected:
	HRESULT InvokeConnection
		(
		DISPID dispIdMember, 
		REFIID riid, 
		LCID lcid, 
		WORD wFlags, 
		DISPPARAMS *pDispParams, 
		VARIANT *pVarResult, 
		EXCEPINFO *pExcepInfo, 
		UINT *puArgErr)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				hr = pConnection->Invoke(dispIdMember,riid,lcid,wFlags,pDispParams, pVarResult,pExcepInfo,puArgErr);
			}
		}
		return hr;
	}

public:
protected:
private:
};

#endif