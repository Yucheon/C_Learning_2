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

	[](const int& i)->void				//무명함수가 사용됨
	{
		cout << "Hello, Worlddd!" << endl;
	}(1234);


	{
		string name = "Jack Jack";
		[&]() {std::cout << name << endl; }();
	}

	//STL이랑 같이 사용하기
	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	auto func2 = [](int val) {cout << val << endl; };
	for_each(v.begin(), v.end(), func2);				//함수 포인터 'func2'를 넣음

	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });//위의 함수의 포인터를 넣는것 보다 이방법을 더 많이 씀

	cout << []()->int {return 1; }() << endl;

	std::function<void(int)> func3 = func2;		//함수의 기능을 변수마냥 주고 받음
	func3(123);

	std::function<void()>func4 = std::bind(func3, 456);	//<void()>이렇게 int를 써주기 싫을때 bind사용
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
											