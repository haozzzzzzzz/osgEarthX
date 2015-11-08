#ifndef OSGEARTHX_WEB_CLASS_FACTORY_H
#define OSGEARTHX_WEB_CLASS_FACTORY_H 1

#include "JSAPIAuto.h"

FB_FORWARD_PTR(ClassFactory)
class ClassFactory : public FB::JSAPIAuto
{
public:
	ClassFactory()
	{
		registerMethod( "createByEarthObjectClassType", make_method( this, &ClassFactory::createByEarthObjectClassType ) );
		registerMethod( "createBySourceClassType", make_method( this, &ClassFactory::createBySourceClassType ) );
		registerMethod( "createByGeoClassType", make_method( this, & ClassFactory::createByGeoClassType ) );
	}
	virtual ~ClassFactory(){}

	FB::JSAPIPtr createByEarthObjectClassType( int classType );
	FB::JSAPIPtr createBySourceClassType( int classType );
	FB::JSAPIPtr createByGeoClassType( int classType );

protected:
private:
};

#endif