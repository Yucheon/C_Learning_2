#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	using namespace std;

	vector<pair<string, int> > pairlist1;		//되게 복잡한 자료형
	
	typedef vector<pair<string, int> > Myform;

	Myform	pairlist2;
	Myform  pairlist3;

	return 0;
}