#include "MyArray.h"

template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

//explicit instantiation
template class MyArray<char>;			//class ��ü�� explicit instantiation�ϱ�
template class MyArray<double>;
//template void MyArray<double>::print();	//print()��� ��� �Լ��� doubleŸ�Կ� ���� instantiation�ϰڴ�.