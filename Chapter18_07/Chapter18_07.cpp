#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>	//exit()
#include <sstream>

using namespace std;

int main()
{
	const string filename = "my_file.txt";	

	{
		fstream iofs(filename);		//fstream¿∏∑Œ √ ±‚»≠

		iofs.seekg(5);
		cout << (char)iofs.get() << endl;

		iofs.seekg(5);
		iofs.put('A');				//Aµ§æÓæ∫øÏ±‚
	}
	return 0;
}