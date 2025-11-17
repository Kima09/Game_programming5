#include <iostream>

using namespace std;

void sieve(int n)
{
	int max;
	for (int i = 1; i < n;i++)
	{
		if (i * i >= n)
		{
			max = i;
		}
	}
}

int main()
{
#pragma region 에라토스테네스의 채
	int n = 17;

	for (int i = 2;i <= n;i++)
	{
		bool flag = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}

		if (flag)
		{
			cout << i << " ";
		}
	}

#pragma endregion



	return 0;
}