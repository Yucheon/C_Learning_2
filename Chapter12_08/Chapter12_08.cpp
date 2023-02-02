#include <iostream>

using namespace std;

class PoweredDevice
{
public:
	int m_i;

	PoweredDevice(int power)
	{
		cout << "PoweredDevice: " << power << '\n';
	}
};

class Scanner : virtual public PoweredDevice		//virtual선언!
{
public:
	Scanner(int scanner, int power)
		:PoweredDevice(power)
	{
		cout << "Scanner: " << scanner << '\n';
	}
};

class Printer :virtual public PoweredDevice		//virtual선언!
{
public:
	Printer(int printer, int power)
		:PoweredDevice(power)
	{
		cout << "Printer: " << printer<< '\n';
	}
};

class Copier :public Scanner, public Printer
{
public:
	Copier(int scanner, int printer, int power)
		:Scanner(scanner, power), Printer(printer,power),
		PoweredDevice(power)								//최상위 부모클래스를 다시 지정
	{
	 
	}
};

int main()
{
	Copier cop(1, 2, 3);

	cout << &cop.Scanner::PoweredDevice::m_i << endl;		//000000C1601CF618
	cout << &cop.Printer::PoweredDevice::m_i << endl;		//000000C1601CF618

	return 0;
}