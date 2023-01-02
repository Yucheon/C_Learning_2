#include <iostream>

using namespace std;

int getInt()		//do while이랑 for 사용하기
{
	while (true)
	{
		cout << "Please enter number" << endl;
		int x;
		cin >> x;

		if (std::cin.fail())
		{
			std::cin.clear();					//싹지움
			std::cin.ignore(32767, '\n');		//버퍼를 비워줌
			cout << "정상적인 수가 아닙니다." << endl;
		}

		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

char getOperator()
{
	while (true)
	{

	cout << "Please enter Operator" << endl;
	char op;
	cin >> op;
	std::cin.ignore(32767, '\n');		//버퍼를 비워줌

	if (op == '+' || op == '-'|| op == '*' ||op == '/')
		return op;
	else
		cout << "똑바로 넣으세요" << endl;
	}

}

void printResult(int x, char op, int y)		//case 사용하기
{
	switch (op)
	{
	case '+':
		{
		cout << x + y << endl;
		}break;
	case '-':
	{
		cout << x - y << endl;
	}break;
	case '*':
	{
		cout << x * y << endl;
	}break;
	case '/':
	{
		cout << x / y << endl;
	}break;
	default:
	{
		cout << "잘못 입력했어" << endl;
	}break;
	}
	//if (op == '+')cout << x + y << endl;
	//else if (op == '-')cout << x - y << endl;
	//else
	//{
	//	cout << "Invalid operator" << endl;
	//}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);
	return 0;
}