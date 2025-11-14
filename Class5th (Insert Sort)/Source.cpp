#include <iostream>

using namespace std;

int main()
{
#pragma region 삽입 정렬
	//데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
	//자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘입니다.

	//스왑 함수는 사용해선 안 된다.

	int list[] = { 8,5,6,2,4 };
	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 1;i < size;i++)
	{
		int key = list[i];
		int j = i - 1;
		for (; j >= 0 && list[j] > key;j--)
		{
			list[j + 1] = list[j];
		}
		list[j + 1] = key;
	}

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}