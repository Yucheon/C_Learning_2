#include <iostream>

using namespace std;

int main(int argc, char *argv[])//argc:°¹¼ö  argv[]:³»¿ë
{
	for (int count = 0; count < argc; ++count)
	{
		cout << argv[count] << endl;
	}
	return 0;
}