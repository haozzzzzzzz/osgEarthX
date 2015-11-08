/**
	@brief ISourceDispatch接口的部分实现模板
	@author Hao Luo
	@date 2015/03/25
*/

#ifndef OSGEARTHX_COM_SOURCE_DISPATCH_IMPL_H
#define OSGEARTHX_COM_SOURCE_DISPATCH_IMPL_H 1

#include <COM/Earth/PtrEarthDispatchImpl.h>

#define SourcePtrEarthDispatchImplTemplate PtrEarthDispatchImpl< SourceClassType, T_InnerClass, T_ImplClass, T_IDispatch, rclsid, riid, pUnkOuter, dwClsContext, plibid, wMajor, wMinor, tihclass >
template
	<
		class T_InnerClass,//内部类型
		class T_ImplClass,//实现T_IDispatch的类
		class T_IDispatch,//IDispatch接口, T_IDispatch必须继承自IEarthDispatch
		/**
			创建接口对象模板参数
		*/
		REFCLSID rclsid,//类ID
		REFIID riid,//接口ID
		LPUNKNOWN pUnkOuter = NULL,
		DWORD dwClsContext = CLSCTX_INPROC_SERVER,

		/**
			创建接口类模板参数
		*/
		const GUID* plibid = &CAtlModule::m_libid, 
		WORD wMajor = 1,
		WORD wMinor = 0,
		class tihclass = CComTypeInfoHolder
	>
class ATL_NO_VTABLE SourceDispatchImpl : 
	public SourcePtrEarthDispatchImplTemplate
{
public:
	SourceDispatchImpl( SourceClassType classType ) : SourcePtrEarthDispatchImplTemplate( classType ){}
	virtual ~SourceDispatchImpl(){}

	//ISourceDispatch
	STDMETHOD( get_classType )( SourceClassType *pClassType )
	{
		*pClassType = m_ClassType;
		return S_OK;
	}

protected:
private:
};

#endif