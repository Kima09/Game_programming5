#include <iostream>

using namespace std;

int main()
{
#pragma region 선택 정렬
	//주어진 리스트 중에서 최소값을 찾은 다음 특정한 위치에서
	//결과를 교체하는 방식으로 정렬하는 알고리즘입니다.

	int list[] = { 9,6,7,3,5 };
	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0;i < size - 1;i++)
	{
		int min = list[i];
		int index = i;
		for (int j = i + 1; j < size;j++)
		{
			if (min > list[j])
			{
				min = list[j];
				index = j;
			}
		}
		std::swap(list[i], list[index]);
	}

	for (const auto& element : list)
	{
		cout << element << " ";
	}

	//시간복잡도는 더블 소트처럼 n제곱이다. 실질적으로 더블 소트보다는 약간 더 빠르다.
#pragma endregion


	return 0;
}