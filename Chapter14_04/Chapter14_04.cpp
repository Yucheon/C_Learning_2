#include <iostream>
#include <exception>
#include <string>
using namespace std;

class CustomException :public std::exception	//exception�� ��ӹ޴� Ŀ���� exception
{
public:
	const char* what() const noexcept override		//what()�Լ��� �������̵� ��
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
		std::cout << typeid(exception).name() << std::endl;	//�ڽ�Ŭ�����̸� ���
		std::cerr << exception.what() << std::endl;
	}
	return 0;
}