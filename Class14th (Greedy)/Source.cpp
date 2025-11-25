#include <iostream>

using namespace std;

void change(int n)
{
	while (true)
	{
		int* list = new int[5] {0};
		while (n >= 1000)
		{
			list[0] = n / 1000;
			n = n % 1000;
		}
		while (n >= 500)
		{
			list[1] = n / 500;
			n = n % 500;
		}
		while (n >= 100)
		{
			list[2] = n / 100;
			n = n % 100;
		}
		while (n >= 50)
		{
			list[3] = n / 50;
			n = n % 50;
		}
		while (n >= 10)
		{
			list[4] = n / 10;
			n = n % 10;
		}
		if (n == 0)
		{
			cout << "1000: " << list[0] << endl;
			cout << "500: " << list[1] << endl;
			cout << "100: " << list[2] << endl;
			cout << "50: " << list[3] << endl;
			cout << "10: " << list[4] << endl;
			delete[] list;
			break;
		}
		else
		{
			cout << "failed" << endl;
		}
	}
}

int main()
{
#pragma region 탐욕법
	//최적의 해를 구하는 데에 사용되는 근사적인 방법으로 여러 경우 중
	//하나를 검색해야 할 때마다 그 순간에 최적이라고 생각되는 것을
	//선택해 나가는 방식으로 진행하여 
	// 최종적인 해답을 구하는 알고리즘입니다.

	// 1. 탐욕 선택 속성
	// 각 단계에서 '최적의 선택'을 했을 때 전체 문제에 대한
	// 최적의 해를 구할 수 있는 경우입니다.

	// 2. 최적 부분 구조
	// 전체 문제의 최적의 해가 '부분 문제의 최적의 해로 구성'될
	// 수 있는 경우입니다.

	//탐욕 알고리즘으로 문제를 해결하는 방법

	//1. 선택 절차 (Selection Procedure)
	//현재 상태에서의 최적의 해답을 선택합니다.

	//2. 적절성 검사 (Feasibility Check)
	//선택된 해가 문제의 조건을 만족하는지 검사합니다.

	//3. 해답 검사 (Solution Check)
	//원래의 문제가 해결되었는지 검사하고, 해결되지 않았다면
	//선택 절차로 돌아가 위의 과정을 반복합니다.

	//거스름돈 1370원
	//1000원, 500원, 100원, 50원, 10원

	change(1370);

	int n = 1370;
	int count = 0;
	while (n >= 10)
	{
		if (n >= 1000)
		{
			n -= 1000;
		}
		else if (n >= 500)
		{
			n -= 500;
		}
		else if (n >= 100)
		{
			n -= 100;
		}
		else if (n >= 50)
		{
			n -= 50;
		}
		else if (n >= 10)
		{
			n -= 10;
		}
		count++;
	}
	cout << endl << "count: " << count << endl;
#pragma endregion


	return 0;
}