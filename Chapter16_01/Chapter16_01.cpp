#include <iostream>
#include <vector>
#include <deque>
#include <set>		//'multiset'�� ���� �ִµ� 'set'�ȿ� �������
#include <map>		//'multmap'���� ���� ������ 'map'�ȿ� ��� ����
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

int main()	//�����̳ʴ� �������� ������.
{
	//sequence_containers();

	//associative_containers();

	container_adapters();

	return 0;
}