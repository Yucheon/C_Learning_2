#include <iostream>
#include <vector>

using namespace std;

void printStatck(const std::vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " ";
	cout << endl;
}

int main()
{
	std::vector<int>stack;		

	//stack.reserve(1024);

	stack.push_back(3);
	printStatck(stack);		//3

	stack.push_back(5);
	printStatck(stack);		//3 5

	stack.push_back(7);
	printStatck(stack);		//3 5 7

	stack.pop_back();
	printStatck(stack);		//3 5

	stack.pop_back();
	printStatck(stack);		//3
	return 0;
}