#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected :
	std::string m_name;

public:
	Animal(std::string name)
		:m_name(name)
	{}

	string getName()
	{
		return m_name;
	}

	virtual void speak() const
	{
		cout << m_name << "    Nothing" << endl;
	}
};

class Dog:public Animal
{
public:
	Dog(std::string name)
		:Animal(name)
	{}
	
	void speak() const
	{
		cout << m_name <<"    wall wall" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(std::string name)
		:Animal(name)
	{}

	void speak() const
	{
		cout << m_name <<"    meow meow" << endl;
	}
};

int main()
{
	Animal animal("zahir");
	Cat cat("milo");
	Dog dog("itki");

	cat.speak();
	dog.speak();
	animal.speak();

	Animal* ptr_animal = &cat;
	ptr_animal->speak();

	return 0;
}