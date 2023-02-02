#include <iostream>
#include<vector>
#include <string>

using namespace std;

class Doctor;		//Patient는 Doctor를 모르므로 전방 선언(서로가 알아야하기 때문) 하지만 멤버변수에는 접근할 수 없다. Body를 분리하여 밑으로

class Patient		//Patient 클래스 선언
{
private:
	string m_name;					//멤버 변수 선언
	vector<Doctor*> m_doctor;		//환자가 만나는 의사의 이름을 기록
public:
	Patient(string name_in)
		:m_name(name_in)
	{}

	void addDoctor(Doctor* New_doctor)//호출시 
	{
		m_doctor.push_back(New_doctor);//vector이므로 push_back을 이용하여 삽입
	}

	void meetDoctor();		//Doctor 클래스의 아래에 바디 선언
	//{
	//	for (auto ele : m_doctor)
	//	{
	//		cout << "Meet doctor : " << ele->m_name << endl;	//Doctor클래스의 끝에 friend를 선언
	//	}
	//}
	friend class Doctor;				//friend를 선언하여 Doctor의 Private멤버에 접근 가능하게 함
};

class Doctor
{
private:
	string m_name;					//멤버 변수 선언
	vector<Patient*> m_patient;		//의사가 만나는 환자의 멤버변수
public:	
	Doctor(string name_in)
		:m_name(name_in)
	{}

	void addPatient(Patient* New_patient)	//Patient형 포인터로 받음
	{
		m_patient.push_back( New_patient);	//주솟값으로 전달
	}

	void meetPatient()
	{
		for (auto ele : m_patient)
		{
			cout << "Meet Patient : " << ele->m_name << endl;	//Patient의 끝에 friend를 선언
		}
	}

	friend class Patient;				//friend를 선언하여 Patient의 Private멤버에 접근 가능하게 함
};

void Patient::meetDoctor()				//전방선언으로 class Doctor를 해주었지만 m_doctor는 알 수없으므로 바디만 밑으로
{
	for (auto ele : m_doctor)
	{
		cout << "Meet doctor : " << ele->m_name << endl;	//Doctor의 끝에 friend를 선언
	}
}


int main()
{
	Patient* p1 = new Patient("Jack Jack");		//Patient 클레스형 포인터 변수 p1에 new연산자를 사용하여 동적할당으로 초기 멤버를 "Jack Jack"으로 하는 인스턴스를 부여함
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Dash");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);						//p1이 닥터 d1을 만남 포인터 변수이므로 ->연산자로 접근
	d1->addPatient(p1);						//p1이 닥터 d1을 만났으므로 이는 곧 d1이 p1을 만난 셈 (입장만 반대)

	p2->addDoctor(d2);						
	d2->addPatient(p2);

	p2->addDoctor(d1);						
	d1->addPatient(p2);

	p1->meetDoctor();						//p1이 어떤 의사를 만나는지 출력

	d1->meetPatient();						//d1이 어떤 환자를 만나는지 출력

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}