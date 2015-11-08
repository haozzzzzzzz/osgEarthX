/**
	@brief : 构造类模板
	@author : Hao Luo
	@date : 2014/11/21
*/

#ifndef OSGEARTHX_WEB_CONSTRUCTOR_H
#define OSGEARTHX_WEB_CONSTRUCTOR_H 1

#include "JSAPIAuto.h"

template<class T>
class ConstructorT : public FB::JSAPIAuto
{
public:
	virtual FB::variant Construct( const std::vector<FB::variant>& args )
	{
		return boost::make_shared<T>( &args );
	}

protected:
private:
};

#endif