
#include <Callback/CallbackHost.h>
using namespace osgEarthXCore;

#include <algorithm>

CallbackHost::~CallbackHost(){}

void CallbackHost::addCallback( Callback* pCallback )
{
	if ( pCallback == NULL )
	{
		return;
	}

	////如果已经存在相同的callback则不再添加
	//CallbackIterator itr = std::find( m_CallbacksDynamicList.getOrCreateDynamicList()->begin(), m_CallbacksDynamicList.getOrCreateDynamicList()->end(), pCallback );
	//if ( itr != m_CallbacksDynamicList.getOrCreateDynamicList()->end() )
	//{
	//	return;
	//}

	m_CallbacksDynamicList.getOrCreateDynamicList()->push_back( pCallback );
}

void CallbackHost::removeCallback( Callback* pCallback )
{
	if ( pCallback == NULL || m_CallbacksDynamicList.valid() == false )
	{
		return;
	}

	m_CallbacksDynamicList.getOrCreateDynamicList()->remove( pCallback );
}

void CallbackHost::callback( Change* pChange )
{
	if ( m_CallbacksDynamicList.valid() == false )
	{
		return;
	}

	CallbacksList* pCallbacksList = m_CallbacksDynamicList.getOrCreateDynamicList();

	for ( CallbackIterator itr = pCallbacksList->begin(); itr != pCallbacksList->end(); itr ++ )
	{
		(*itr)->doCallback( pChange );
	}

}