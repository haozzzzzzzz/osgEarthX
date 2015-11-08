#include <iostream>
using namespace std;

#include <osg/Referenced>
#include <osg/ref_ptr>

class A : public osg::Referenced
{
public:
protected:
	virtual ~A()
	{
		cout<<"disctructing."<<endl;
	}
private:
};

A* release()
{
	osg::ref_ptr<A> a = new A();
	return a.release();
}

int main()
{
	osg::ref_ptr<A> a = release();
	unsigned int i = a->referenceCount();
	return 0;
}