#include <iostream>
#include <fstream>	//wndy
#include <string>
#include <cstdlib>	//exit()
#include<sstream>

using namespace std;

int main()
{
	ofstream ofs("my_first_file.dat");	//ios::app, ios::binary,	ofstream생성
	// writing
	if (true)
	{
		ofstream ofs("my_first_file.dat");	//ios::app, ios::binary,	ofstream생성

		if (!ofs)		//파일을 열수 없다면
		{
			cerr << "Couldn't open file" << endl;
			exit(1);
		}
		const unsigned num_data = 10;				//데이터가 몇개인지
		ofs.write((char*)&num_data, sizeof(num_data));

		for (int i = 0; i < num_data; ++i)
			ofs.write((char*)&i, sizeof(i));

	}



	//reading
	if (true)
	{
		ifstream ifs("my_first_file.dat");	

		if (!ifs)
		{
			cerr << "Cannot open file" << endl;
			exit(1);
		}

		unsigned num_data = 0;
		ifs.read((char*)&num_data, sizeof(num_data));

		for (unsigned i = 0; i < num_data; ++i)
		{
			int num;
			ifs.read((char*)&num, sizeof(num));

			std::cout << num << endl;
		}
	}
}