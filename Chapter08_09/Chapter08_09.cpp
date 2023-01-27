#include <iostream>
#include <string>
using namespace std;

class Something {//const 사용
public:
	string s_value = "default";

	const string& getValue() const	//const 사용
	{
		cout << "constversion" << endl;
		return s_value; 
	}		
	string& getValue()				//const 미사용
	{
		cout << "no version" << endl;
		return s_value; 
	}					
};

int main()
{
	Something something;
	something.getValue();		//no version

	const Something somthing2;	//constversion
	somthing2.getValue();

	return 0;
}