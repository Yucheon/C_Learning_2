#include <iostream>
#include <cmath>
#include <limits>
int main()
{
	using namespace std;

	short s = 1;		//2 bytes = 2*8 bits =16 bits

	cout << std::pow(2,sizeof(short)*8-1)-1 << endl;		//32767
	cout << std::numeric_limits<short>::max() << endl;		//32767
	cout << std::numeric_limits<short>::min() << endl;		//-32768
	cout << std::numeric_limits<short>::lowest() << endl;	//-32768

		return 0;
}