#include <iostream>

using namespace std;

int main()
{
#pragma region 이분 탐색
	//탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
	//좁혀나가는 방식으로 동작하는 알고리즘입니다.

	int list[] = { 5,6,11,13,27,55,66,92 };
	int size = sizeof(list) / sizeof(list[0]);
	int left = 0;
	int right = size - 1;
	int pivot = size / 2 - 1;
	int a = 11;
	while (true)
	{
		if (list[right] == a)
		{
			return right;
		}
		else if (list[left] == a)
		{
			return left;
		}
		else if (list[pivot] == a)
		{
			return pivot;
		}
		else if (list[pivot] < a)
		{

			pivot = size * (size - pivot) / 2;
		}
	}

#pragma endregion





	return 0;
}