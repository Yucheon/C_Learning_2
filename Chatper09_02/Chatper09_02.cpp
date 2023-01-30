#include <iostream>
using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		:m_x(x), m_y(y), m_z(z)
	{}

	double getx() { return m_x; }
	double gety() { return m_y; }
	double getz() { return m_z; }

	//void print()
	//{
	//	cout << m_x << " " << m_y << m_z << endl;
	//}

	friend std::ostream& operator << (std::ostream & out, const Point & point)
	{
		out << m_x << endl;
	}
};
//return Å¸ÀÔÀÌ ostream
int main()
{
	//Point p1(0.0, 0.1, 0.2);
	//p1.print();

	return 0;
}