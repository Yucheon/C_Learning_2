#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void goodbye(const string& s)
{
	cout << "Goodbye" << s << endl;
}

class Object
{
public:
	void hello(const string& s)
	{
		cout << "Hello" << s << endl;
	}
};

int main()
{

	auto func = [](const int& i)->void 
	{
		cout << "Hello, World!" << endl; 
	};

	func(123);

	[](const int& i)->void				//�����Լ��� ����
	{
		cout << "Hello, Worlddd!" << endl;
	}(1234);


	{
		string name = "Jack Jack";
		[&]() {std::cout << name << endl; }();
	}

	//STL�̶� ���� ����ϱ�
	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	auto func2 = [](int val) {cout << val << endl; };
	for_each(v.begin(), v.end(), func2);				//�Լ� ������ 'func2'�� ����

	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });//���� �Լ��� �����͸� �ִ°� ���� �̹���� �� ���� ��

	cout << []()->int {return 1; }() << endl;

	std::function<void(int)> func3 = func2;		//�Լ��� ����� �������� �ְ� ����
	func3(123);

	std::function<void()>func4 = std::bind(func3, 456);	//<void()>�̷��� int�� ���ֱ� ������ bind���
	func4();

	{
		Object instance;
		auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);

		f(string("World"));

		auto f2 = std::bind(&goodbye, std::placeholders::_1);

		f2(string("World"));
	}

	return 0;
}				
											