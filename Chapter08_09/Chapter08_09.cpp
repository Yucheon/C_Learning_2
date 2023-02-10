#include <iostream>
#include <string>

class SomeThing
{
public:
	std::string m_value = "default";

	std::string getValue()
	{
		std::cout <<"�Լ� ȣ�� �� �ּ�"<< this << std::endl;
		return m_value;
	};

	const std::string& getValue() const
	{
		std::cout << "�Լ� ȣ�� �� const�� �ּ�"<<this << std::endl;
		return m_value;
	};
};

int main()
{
	SomeThing something;

	const SomeThing st;

	std::cout <<"�⺻ �ּ�"<< & something << std::endl;

	something.getValue()=10;

	std::cout<<"const�� �ּ�" << &st<< std::endl;

	st.getValue();

	return 0;
}