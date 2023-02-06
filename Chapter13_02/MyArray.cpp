#include "MyArray.h"

template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

//explicit instantiation
template class MyArray<char>;			//class 자체를 explicit instantiation하기
template class MyArray<double>;
//template void MyArray<double>::print();	//print()라는 멤버 함수를 double타입에 대해 instantiation하겠다.