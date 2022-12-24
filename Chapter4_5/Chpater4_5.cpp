#include <iostream> 
#include <typeinfo>	

int main()
{
	using namespace std;

	//numeric conversion

	int i = 30000;
	char c = i;

	cout << static_cast<int>(c) << endl;
	return 0;
}