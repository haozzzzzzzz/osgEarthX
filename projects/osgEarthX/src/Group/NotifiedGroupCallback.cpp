#include <Group/NotifiedGroupCallback.h>
#include <Group/Group.h>
using namespace osgEarthX;

#include <cassert>

NotifiedGroupCallback::NotifiedGroupCallback( Group*pGroup )
{
	assert(pGroup != NULL);

	m_pParentGroup = pGroup;
}

NotifiedGroupCallback::~NotifiedGroupCallback()
{

}

void NotifiedGroupCallback::doCallback( osgEarthXCore::Change* pChange )
{
	m_pParentGroup->callback( pChange );
}