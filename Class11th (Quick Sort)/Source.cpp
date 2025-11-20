#include <iostream>

using namespace std;

void sort(int list[], int start, int end)
{
	if (start >= end) return;

	//pivot 변수의 값
	int pivot = start;

	//left 변수의 값
	int left = start + 1;

	//right 변수의 값
	int right = end;

	//left가 right보다 커질 때까지 반복합니다.
	while (left <= right)
	{
		//left가 end보다 작거나 같고 list[left]가
		//list[pivot]보다 작거나 같을 때까지 반복합니다.
		while (left <= end && list[pivot] >= list[left])
		{
			left++; //left 값 증가
		}

		//right가 start보다 크고 list[right]가
		//list[pivot]보다 크거나 같을 때까지 반복합니다.
		while (right > start && list[pivot] <= list[right])
		{
			right--; //right 값 감소
		}

		if (left > right)
		{
			std::swap(list[pivot], list[right]);
		}
		else
		{
			std::swap(list[left], list[right]);
		}
	}
	sort(list, start, right - 1);
	sort(list, right + 1, end);
}

int main()
{
#pragma region 퀵 정렬
	//기준점을 획득한 다음 기준점을 기준으로 배열을 나누고 한 쪽에는
	//기준점보다 작은 값들이 위치하게 한 다음 다른 한 쪽에는 기준점보다
	//큰 값들이 위치하도록 합니다.

	//나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여
	//모든 배열이 기본 배열이 될 때까지 반복하면서 정렬합니다.

	//pivot 0, left 1, right size-1 시작
	// left는 pivot 값보다 클 때까지 우로 이동
	//right값이 pivot보다 작을 때까지 좌로 이동
	// 둘 다 정지할 시 left와 right 스왑.

	//left와 right이 엇갈리면 (left보다 좌측에 위치한)right과 pivot을 스왑

	int list[] = { 5,3,8,4,1,6,2,7 };
	int size = sizeof(list) / sizeof(list[0]);

	sort(list, 0, size - 1);

	for (const auto& element : list)
	{
		cout << element << " ";
	}
#pragma endregion


		//1 3 2 4 5 6 8 7
		//1 3 2 4    
		//3 2 4       
		//2 3 4
		//
		//6 8 7
		//8 7 
		//7 8
		// 
		//
		//시작: [5, 3, 8, 4, 1, 6, 2, 7]
		//
		//1차 : [5, 3, 2, 4, 1, 6, 8, 7]
		//[1, 3, 2, 4, 5, 6, 8, 7]
		//
		//2차 : [1, 3, 2, 4]
		//
		//3차 : [1, 2, 3, 4]
		//
		//4차 : [6, 8, 7]
		//
		//5차 : [6, 7, 8]
		//
		//완성 : [1, 2, 3, 4, 5, 6, 7, 8]
		return 0;
}