#include <iostream>
#include <regex>		

using namespace std;

int main()
{
	//regex re("\\d");			//regex 선언, \d 숫자인지 판별
	//regex re("[[:digit:]]{3}");	//'\d = [:digit:]', 가장 바깥의 []은 안에있는 것은 ok이다., 3개를 맞춰서
	//regex re("[A-Z]+");			//대문자 A부터 Z까지 1개이상
	//regex re("[A-Z]{1,5}");		//1개이상 5개 이하
	regex re("([0-9]{1})([-]?)([0-9]{1,4}]");	//?가있는 부분인 [-]은 '-'가 있어도 되고 없어도된다.

	string str;

	while (true)
	{
		getline(cin, str);

		if (std::regex_match(str, re))	//regex_match함수를 이용해 입력받은 형식이 맞는지 검사함
			cout << "Match" << endl;
		else
			cout << "No match" << endl;

		//print matches
		{
			auto begin = std::sregex_iterator(str.begin(), str.end(), re);
			auto end = std::sregex_iterator();
			for (auto itr = begin; itr != end; ++itr)
			{
				std::smatch match = *itr;		//sregex_iterator를 이용하여 match되는 부분만 출력시킴
				cout << match.str() << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
