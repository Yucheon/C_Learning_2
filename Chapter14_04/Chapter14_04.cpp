#include <iostream>
#include <exception>
#include <string>
using namespace std;

class CustomException :public std::exception	//exception을 상속받는 커스텀 exception
{
public:
	const char* what() const noexcept override		//what()함수를 오버라이드 함
	{
		return "Custom exception";
	}
};
int main()
{
	try
	{
		throw CustomException();
	}
	catch (std::exception& exception)
	{
		std::cout << typeid(exception).name() << std::endl;	//자식클래스이름 출력
		std::cerr << exception.what() << std::endl;
	}
	return 0;
}