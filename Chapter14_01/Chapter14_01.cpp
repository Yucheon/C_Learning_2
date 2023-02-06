#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	try			//try와 catch는 아주 엄격하기 때문에 잘 사용하여야 한다.
	{
		throw std::string("My_error_Message");
	}
	catch (int x)	
	{
		cout << " Catch integer"<<x << endl;
	}
	catch (double x)
	{
		cout << " Catch double" << x << endl;

	}
	catch (const char *error_message)
	{
		cout << "char*" << error_message << endl;
	}

	catch (std::string error_message)		//여기서 실행
	{
		cout << error_message << endl;
	}
	return 0;
}