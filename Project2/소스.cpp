#include <iostream>
#include <string>

int main()

{
	std::string str("Test string");		//string ���ڿ��� Test string�ʱ�ȭ

	std::cout << "size: " << str.size() << "\n";	//���ڿ��� ũ�� ���

	std::cout << "length: " << str.length() << "\n";	//���ڿ��� ���� ���	

	std::cout << "capacity: " << str.capacity() << "\n";	//���ڿ��� �޸𸮰� �Ҵ�� ������ �뷮

	std::cout << "max_size: " << str.max_size() << "\n"; //< -��Ʈ���� ���� �� �ִ� ���� ū ũ��

		std::cout << size_t(-1) - str.max_size() << std::endl; // 13835058055282163712, �� ��Ʈ���� ���� �� �ִ� ���� ū ũ�� ���� �� ū ������ ��û�߱� ������ ������ �߻�

	return 0;

}