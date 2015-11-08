#include <ThreadPool/OrderHoldersContainer/OrderHolder.h>
using namespace osgXThreads;

OrderHolder::OrderHolder()
{
	uiOrder = 0;
	bArrival = false;
}

OrderHolder::OrderHolder( const OrderHolder& orderHolder )
{
	uiOrder = orderHolder.uiOrder;
	bArrival = orderHolder.bArrival;
}

OrderHolder::~OrderHolder()
{

}