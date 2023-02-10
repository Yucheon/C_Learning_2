#include <iostream>
#include <string>

class SomeThing
{
public:
	std::string m_value = "default";

	std::string getValue()
	{
		std::cout <<"함수 호출 후 주소"<< this << std::endl;
		return m_value;
	};

	const std::string& getValue() const
	{
		std::cout << "함수 호출 후 const의 주소"<<this << std::endl;
		return m_value;
	};
};

int main()
{
	SomeThing something;

	const SomeThing st;

	std::cout <<"기본 주소"<< & something << std::endl;

	something.getValue()=10;

	std::cout<<"const의 주소" << &st<< std::endl;

	st.getValue();

	return 0;
}