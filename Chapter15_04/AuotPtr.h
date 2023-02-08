#include <iostream>

template<class T>
class AutoPtr
{
public:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)
		:m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor" << std::endl;
	}

	~AutoPtr()
	{
		std::cout << "AutoPrt destructor" << std::endl;

		if (m_ptr != nullptr) delete m_ptr;
	}

	AutoPtr(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy constructor" << std::endl;

		m_ptr = new T;
		*m_ptr = *a.m_ptr;
	}

	AutoPtr& operator =(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy assignment" << std::endl;

		if (&a == this)
			return *this;

		if (m_ptr != nullptr)delete m_ptr;

		//deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;

		return *this;
	}

	//AutoPtr(const AutoPtr& a) = delete;				//copy constructor ��Ȱ��ȭ
	//AutoPtr& operator=(const AutoPtr& a) = delete;	//copy assignment  ��Ȱ��ȭ

	AutoPtr(AutoPtr&& a)
		:m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr;	//really necessary?

		std::cout << "AutoPtr move constructor" << std::endl;
	}
	AutoPtr& operator=(AutoPtr&& a)
	{
		std::cout << "AutoPtr move assignment" << std::endl;

		if (&a == this)				//prevent self-assignment
			return *this;

		if (!m_ptr) delete m_ptr;  //�ڽſ��� �޸𸮰� �ִٸ� ����

		m_ptr = a.m_ptr;        //�����͸� ���縸 ��, �Kī�Ǹ� �ϴ°� ��.��! õ������ �ϴ°� �ƴϾ�!
		a.m_ptr = nullptr;			//really necessary? ������ ������ǵ� ���ִ� ������ Ȯ���� ���ַ���
		//a.m_ptr�ʴ� ���̻� �������� ����!
		return *this;
	}
	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
	bool isNull() const { return m_ptr == nullptr; }
};