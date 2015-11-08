#include <iostream>
using namespace std;

#include <ThreadPool/SingleThreadBeltline.h>

class TestTask : public osgXThreads::Task
{
public:
	TestTask()
	{
		m_i = count ++;
	}
	virtual void doTask()
	{
		cout << "task" << m_i <<endl;
	}
protected:
	static int count;
	int m_i;
private:
};

int TestTask::count = 0;

int main()
{
	osgXThreads::SingleThreadBeltline beltline;

	for ( int i = 0; i < 100; i ++ )
	{
		beltline.addTaskAndWakeUp( new TestTask() );
	}
	cin.get();
	return 0;
}