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

	//AutoPtr(const AutoPtr& a) = delete;				//copy constructor 비활성화
	//AutoPtr& operator=(const AutoPtr& a) = delete;	//copy assignment  비활성화

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

		if (!m_ptr) delete m_ptr;  //자신에게 메모리가 있다면 지움

		m_ptr = a.m_ptr;        //포인터를 복사만 함, 딮카피를 하는게 아.님! 천만개를 하는게 아니야!
		a.m_ptr = nullptr;			//really necessary? 어차피 사라질건데 해주는 이유는 확실히 해주려고
		//a.m_ptr너는 더이상 소유권이 없어!
		return *this;
	}
	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
	bool isNull() const { return m_ptr == nullptr; }
};