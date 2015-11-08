
#include <Group/NotifiedGroup.h>
using namespace osgEarthX;

NotifiedGroup::NotifiedGroup()
{
	m_refCallback = new NotifiedGroupCallback( this );
}

NotifiedGroup::~NotifiedGroup()
{

}

NotifiedGroupCallback* NotifiedGroup::getNotifiedGroupCallback()
{
	return m_refCallback;
}