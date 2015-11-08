#include <EarthWeb/EarthMap/EarthMap.h>
#include <EarthWeb/Utils/StaticUtils/EarthObjectStaticUtils.h>

unsigned int EarthMap::get_maxThreadsNum()
{
	return getOrCreateInnerObject()->getMaxThreadsNum();
}

void EarthMap::put_maxThreadsNum(unsigned int num)
{
	getOrCreateInnerObject()->setMaxThreadsNum(num);
}