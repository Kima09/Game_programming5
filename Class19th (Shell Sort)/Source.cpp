#include <iostream>
#include<list>
#include<vector>

using namespace std;



int main()
{
#pragma region 쉘 정렬
	//리스트를 일정한 간격에 따라 나누고, 각 부분 리스트를
	//삽입 정렬을 통해 정렬하는 방법입니다.

	//1. 초기 시작 간격을 설정합니다.
	//2. 간격 단위로 그룹을 묶어서 리스트를 나눕니다.
	//3. 각 그룹의 n번째 원소들끼리 삽입 정렬을 수행합니다.
	//4. 간격의 크기를 반으로 줄입니다.
	//5. 간격이 1이 될 때까지 2번부터 반복합니다.

	int list[] = { 14,57,21,8,36,25,32,19 };
	int size = sizeof(list) / sizeof(list[0]);
	int k = size / 2;
	while (true)
	{
		for (int i = k;i < size;i++)
		{
			int value = list[i]; //지금 정렬할 값
			int position = i; //인덱스

			//value보다 큰 값들은 k칸씩 뒤로 민다
			while (position >= k && list[position - k] > value)
			{
				list[position] = list[position - k]; //큰 값 뒤로 민다. k씩 차이나는 대로이므로 -1이 아닌 -k.
				position -= k;//position 왼쪽으로 한 칸 이동한다. 한 칸 = k만큼.

			}

			//큰 값은 뒤로 밀었고 position은 비었다.(혹은 맨 앞이든가) 그 위치에 집어넣는다.
			list[position] = value;
		}
		k = k / 2;

		if (k < 1)
		{
			break;
		}
	}
	for (int i = 0; i < size;i++)
	{
		cout << list[i] << " ";
	}
#pragma endregion


	return 0;
}