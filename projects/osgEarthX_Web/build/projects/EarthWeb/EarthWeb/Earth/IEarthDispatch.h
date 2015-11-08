/**
	@brief 项目类基本JS接口
	@author Hao Luo
	@date 2014
*/

#ifndef OSGEARTHX_WEB_I_EARTH_DISPATCH_H
#define OSGEARTHX_WEB_I_EARTH_DISPATCH_H 1

#include "JSAPIAuto.h"

FB_FORWARD_PTR(IEarthDispatch)
class IEarthDispatch : public FB::JSAPIAuto
{
public:
	IEarthDispatch()
	{
		registerMethod( "equal",make_method( this, &IEarthDispatch::equal ) );
	}

	virtual bool equal( IEarthDispatchPtr ptr ) = 0;

protected:
private:
};

#endif