#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;

public :
	Animal(string name)
		: m_name (name)
	{}

public:
	std::string getName()
	{
		return m_name;
	}

	void virtual speak() const
	{
		cout << m_name << " ??? " << endl;
	}
};

class Cat : public Animal
{
public :
	Cat(string name)
		:Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Meow" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		:Animal(name)
	{ }

	void speak() const
	{
		cout << m_name << " Woof" << endl;
	}

};

int main()
{

	Cat thiscat("this_cat");
	Cat cats[] = { Cat("cat1"), Cat("cat2"), Cat("cat3") };
	Dog dogs[] = { Dog("dog1"),Dog("dog2"),Dog("dog3") };

	Animal* animals[] = { &cats[0], &cats[1], &cats[2],&dogs[0],&dogs[1],&dogs[2] };

	for (int i = 0; i < 6; ++i)
	{
		animals[i]->speak();
	}
	
	return 0;
}