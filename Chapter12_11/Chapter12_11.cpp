#include <iostream>
class Base
{
public:
	Base(){}

	friend std::ostream& operator <<(std::ostream& out, const Base& b)
	{
		return b.print(out);	//friend함수는 멤버가 아니기 때문에 print()함수로 일을 다 떠넘김
	}

	virtual std::ostream& print(std::ostream& out)const	//여기서 오버라이딩
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived(){}

	virtual std::ostream& print(std::ostream& out) const override //일을 대신함
	{
		out << "Derived";
		return out;
	}
};

int main()
{
	Base b;
	std::cout << b << '\n';

	Derived d;
	std::cout<<d<< '\n';

	Base& bref = d;
	std::cout<<bref<< '\n';

	return 0;
}