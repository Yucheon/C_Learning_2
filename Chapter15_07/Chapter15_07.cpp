#include <iostream>
#include <memory>
#include <string>

class Person
{
	std::string m_name;
	//std::shared_ptr<Person> m_partner;
	std::weak_ptr<Person> m_partner;		//weak_ptr 사용

public:
	Person(const std::string& name)
	: m_name(name)
	{
		std::cout << m_name << "created\n";
	}

	~Person()
	{
		std::cout << m_name << "destroyed\n";
	}

	friend bool partnerUp(std::shared_ptr<Person>& p1, std::shared_ptr<Person>& p2)	//두 사람에대한 ahsred_ptr이 들어오면
	{
		if (!p1 || !p2)		//둘다 비어있는게 맞다면은
			return false;

		p1->m_partner = p2;		//p1의 파트너는 p2
		p2->m_partner = p1;		//p2의 파트너는 p1

		std::cout << p1->m_name << "is partnered with" << p2->m_name << "\n";

		return true;
	}

	const std::shared_ptr<Person> getPartner() const
	{
		return m_partner.lock();
	}

	const std::string& getName() const
	{
		return m_name;
	}
};

int main()
{
	auto lucy = std::make_shared<Person> ("Lucy");		//lucy라는 Person을 shared포인터로 생성
	auto ricky = std::make_shared<Person>("Ricky");

	partnerUp(lucy, ricky);

	std::cout<< lucy->getPartner()
	return 0;
}