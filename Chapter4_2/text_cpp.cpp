#include <iostream>
#include "MyConstants.h"

using namespace std;
extern int a=12;

void doSometing()
{
	cout << "In text.cpp file" << Constants::pi <<" "<<&Constants::pi<< endl;

}