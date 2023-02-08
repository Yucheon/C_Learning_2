#include "Timer.h"
#include "AuotPtr.h"
#include "Resource.h"

AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(1000000));

	return res;
}

int main()
{
	using namespace std;
	streambuf* orig_buf = cout.rdbuf();
	//cout.rdbuf(NULL);		//���ۿ� ������ ����

	Timer timer;

	{
		AutoPtr<Resource> main_res;
		main_res = generateResource();
	}

	cout.rdbuf(orig_buf);
	timer.elapsed();

	return 0;
}