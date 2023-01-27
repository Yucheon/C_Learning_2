#include <iostream>



class Fruit
{
public:
	enum class FruitType		//enum을 안에 넣어줌, 특정 클래스만 사용함
	{							//이너클래스, 구조체도 가능
	APPLE, BANANA, CHERRY,
	};
private:
		FruitType m_type;

public:
	Fruit(FruitType type)
		:m_type(type)
	{

	}
	FruitType getType()
	{
		return m_type;
	}
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);	//APPLE의 소속을 표시해줌

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		std::cout << "Apple" << std::endl;
	}
	return 0;
}