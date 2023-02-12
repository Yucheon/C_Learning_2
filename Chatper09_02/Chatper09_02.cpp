#include <iostream>

using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x=0.0, double y=0.0, double z=0.0)
		:m_x(x), m_y(y), m_z(z)
	{}
	double getx()
	{
		return m_x;
	}
	double gety()
	{
		return m_y;
	}
	double getz()
	{
		return m_z;
	}

	friend ostream& operator<<(ostream& out, const Point& point)
	{
		out << "(" << point.m_x << point.m_y << point.m_z << endl;

		return out;
	}
};

int main()
{
	Point point(1.0, 16.4, 8.1);

	cout << point << endl;
	return 0;
}