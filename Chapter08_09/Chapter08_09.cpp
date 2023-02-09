#include <iostream>
#include <vector>

class Cents
{
public:
		int m_int=5;

		int getCents() const 
		{
			return m_int;
		}

		void setCents(int i_int)
		{
			m_int = i_int;
		}

};

int main()
{
	const Cents cents;

	std::cout<<cents.getCents();

	return 0;
}