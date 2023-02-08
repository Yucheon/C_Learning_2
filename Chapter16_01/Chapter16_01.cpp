#include <iostream>
#include <vector>
#include <deque>
#include <set>		//'multiset'이 따로 있는데 'set'안에 들어있음
#include <map>		//'multmap'역시 따로 있지만 'map'안에 들어 있음
#include <string>
#include <stack>
#include <queue>

using namespace std;

void container_adapters()
{	
	//Priority queue
	{
		cout << "Priority queue" << endl;

		std::priority_queue<int> queue;

		for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
			queue.push(n);

		for (int i = 0; i < 10; ++i)
		{
			cout << queue.top() << endl;
			queue.pop();
		}
	}
}

int main()	//컨테이너는 세가지로 나뉜다.
{
	//sequence_containers();

	//associative_containers();

	container_adapters();

	return 0;
}