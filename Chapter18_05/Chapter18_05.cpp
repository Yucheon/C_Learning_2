#include <iostream>
#include <regex>		

using namespace std;

int main()
{
	//regex re("\\d");			//regex ����, \d �������� �Ǻ�
	//regex re("[[:digit:]]{3}");	//'\d = [:digit:]', ���� �ٱ��� []�� �ȿ��ִ� ���� ok�̴�., 3���� ���缭
	//regex re("[A-Z]+");			//�빮�� A���� Z���� 1���̻�
	//regex re("[A-Z]{1,5}");		//1���̻� 5�� ����
	regex re("([0-9]{1})([-]?)([0-9]{1,4}]");	//?���ִ� �κ��� [-]�� '-'�� �־ �ǰ� ����ȴ�.

	string str;

	while (true)
	{
		getline(cin, str);

		if (std::regex_match(str, re))	//regex_match�Լ��� �̿��� �Է¹��� ������ �´��� �˻���
			cout << "Match" << endl;
		else
			cout << "No match" << endl;

		//print matches
		{
			auto begin = std::sregex_iterator(str.begin(), str.end(), re);
			auto end = std::sregex_iterator();
			for (auto itr = begin; itr != end; ++itr)
			{
				std::smatch match = *itr;		//sregex_iterator�� �̿��Ͽ� match�Ǵ� �κи� ��½�Ŵ
				cout << match.str() << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
