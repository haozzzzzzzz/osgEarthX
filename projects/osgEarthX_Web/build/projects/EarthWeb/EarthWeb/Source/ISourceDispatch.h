/**
	@brief 数据源接口
	@author Hao Luo
	@date 2015/03/27
*/

#ifndef OSGEARTHX_WEB_I_SOURCE_DISPATCH_H
#define OSGEARTHX_WEB_I_SOURCE_DISPATCH_H 1

#include <EarthWeb/Earth/IEarthDispatch.h>
#include <EarthWeb/Source/SourceClassType.h>

FB_FORWARD_PTR(ISourceDispatch)
class ISourceDispatch : public IEarthDispatch
{
public:
	ISourceDispatch()
	{
		registerProperty( "classType", make_property( this, &ISourceDispatch::get_classType ) );
	}

	virtual ~ISourceDispatch(){}

	//interface
	virtual SourceClassType get_classType() = 0;

protected:
private:
};

#endif