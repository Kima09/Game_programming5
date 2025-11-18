#include <iostream>

using namespace std;

void sieve(int n)
{
	int* container = new int[n + 1];
	for (int i = 0; i <= n;i++)
	{
		for (int i = 0; i <= n; i++)
		{
			container[i] = i;
		}
		for (int i = 2; i <= sqrt(n);i++)
		{
			if (container[i] == 0)
			{
				continue;
			}
			for (int j = i * 2;j <= n;j += i)
			{
				container[j] = 0;
			}
			
		}
	}
	for (int i = 2;i <= n;i++)
	{
		if (container[i] != 0)
		{
			cout << container[i] << " ";
		}
	}
	delete[] container;
}

int main()
{
#pragma region 에라토스테네스의 채
	//int n = 17;
	//
	//for (int i = 2;i <= n;i++)
	//{
	//	bool flag = true;
	//	for (int j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			flag = false;
	//			break;
	//		}
	//	}
	//
	//	if (flag)
	//	{
	//		cout << i << " ";
	//	}
	//}

	sieve(16);

#pragma endregion



	return 0;
}