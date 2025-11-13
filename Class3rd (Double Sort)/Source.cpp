#include <iostream>

using namespace std;

int main()
{
#pragma region 인플레이스 정렬
	//정렬 과정에서 추가적인 자료구조 또는 메모리 공간을
	//많이 사용하지 않고, 원래 주어진 배열이나 리스트 자체를
	//직접 수정하여 정렬하는 방식입니다.

#pragma endregion

#pragma region 거품 정렬
	//서로 인접한 두 원소를 비교하여 정렬하는 알고리즘입니다.

	int list[] = { 3,5,6,1,2,7,4 };
	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0; i < size - 1;i++)
	{
		for (int j = 0; j < (size - i) - 1;j++)
		{
			if (list[j] > list[j + 1])
			{
				std::swap(list[j], list[j + 1]);
			}
		}
	}

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion



	return 0;
}