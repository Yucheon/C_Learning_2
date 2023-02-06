#include <iostream>

using namespace std;;

void last()
{
	cout << "last" << endl;
	cout << "Throws exception" << endl;

	throw - 1;

	cout << " End last" << endl;
}
void third()
{
	cout << "Third" << endl;

	last();

	cout << "End third" << endl;
}

void second()
{
	cout << "second" << endl;
	try
	{
		third();
	}
	catch (double)	
	{
		cerr << "second caught int exception" << endl;
	}

	cout << "End second" << endl;
}

void first()
{
	cout << "first" << endl;
	try
	{
		second();
	}
	catch (int)
	{
		cerr << "first caught int exception" << endl;
	}

	cout << "End first" << endl;
}

int main()
{
	cout << "Start" << endl;

	try
	{
		first();
	}
	catch (int)
	{
		cerr << "main caught int exception" << endl;
	}
	catch (...)		//ellipses사용, 파라미터를 전부 다 받음
	{
		cerr << "main caught ellipses exception" << endl;
	}
	cout << "End main" << endl;

	return 0;
}