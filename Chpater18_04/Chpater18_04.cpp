#include <iostream>
#include <cctype>
#include <string>
#include <bitset>

using namespace std;

void printCharacterClassification(const int &i)		//#include <cctype>�� ���ǵǾ� ����
{
	cout << boolalpha;
	cout << "isalnum" << bool(std::isalnum(i)) << endl;			
	cout << "isblank" << bool(std::isblank(i)) << endl;
	cout << "isdigit" << bool(std::isdigit(i)) << endl;
	cout << "islower" << bool(std::islower(i)) << endl;
	cout << "isupper" << bool(std::isupper(i)) << endl;	
}

void printStates(const std::ios& stream)	//���ϰ� �ֿܼ� ���� �ϰ����� ����
{
	cout << boolalpha;
	cout << "good()=" << stream.good() << endl;
	cout << "eof()=" << stream.eof() << endl;	//������ �� �о����� üũ
	cout << "fail()=" << stream.fail() << endl;
	cout << "bad()=" << stream.bad() << endl;
}

void classifyCharacters(const string & str)
{
	for (auto e : str)
	{
		cout << e << endl;
		std::cout << "isdigit" << std::isdigit(e) << endl;
		std::cout << "isdigit" << std::isblank(e) << endl;
		std::cout << "isdigit" << std::isalpha(e) << endl;
	}
}

int main()
{
	//while (true)
	//{
	//	char i;
	//	cin >> i;

	//	printStates(cin);


	//	printCharacterClassification(i);		

	//	cin.clear();
	//	cin.ignore(1024, '\n');
	//	cout << endl;
	//}

	cout << boolalpha;
	classifyCharacters("2134");
	classifyCharacters("a 1234");	

	return 0;
}