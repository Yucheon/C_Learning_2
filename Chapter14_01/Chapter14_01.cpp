#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	try			//try�� catch�� ���� �����ϱ� ������ �� ����Ͽ��� �Ѵ�.
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

	catch (std::string error_message)		//���⼭ ����
	{
		cout << error_message << endl;
	}
	return 0;
}