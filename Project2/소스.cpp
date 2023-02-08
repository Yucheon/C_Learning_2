#include <iostream>
#include <string>

int main()

{
	std::string str("Test string");		//string 문자열에 Test string초기화

	std::cout << "size: " << str.size() << "\n";	//문자열의 크기 출력

	std::cout << "length: " << str.length() << "\n";	//문자열의 길이 출력	

	std::cout << "capacity: " << str.capacity() << "\n";	//문자열의 메모리가 할당된 공간의 용량

	std::cout << "max_size: " << str.max_size() << "\n"; //< -스트링이 가질 수 있는 가장 큰 크기

		std::cout << size_t(-1) - str.max_size() << std::endl; // 13835058055282163712, 즉 스트링이 가질 수 있는 가장 큰 크기 보다 더 큰 값으로 요청했기 때문에 문제가 발생

	return 0;

}