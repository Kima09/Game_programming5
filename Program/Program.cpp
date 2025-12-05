#include <iostream>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;

template<typename T>


void combination(int start, int n, int r, vector<int>& vector)
{
	//r개를 다 선택한 경우
	if (vector.size() == r)
	{
		for (const int& x : vector)
		{
			cout << x << " ";
		}
		cout<< endl;
		return;
	}
	for (int i = start;i <= n;i++)
	{
		vector.push_back(i);
		combination(i + 1, n, r, vector);
		vector.pop_back();
	}

}

int main()
{
//순열: 순서 중시, n개 중 r개 뽑아 나열하는 수
// 
//조합: 순서 상관없이 n개 중 r개 뽑기만 하는 수
//nCr n=4 r=2 -> 6

#pragma region 퇴각 검색
	//조건을 만족하는 한 계속 검사해 나가다,
	//조건에 부합하지 않는 순간
	//탐색을 취소하고 이전 단계로 돌아온 뒤 탐색을
	//이어나가는 탐색입니다.

	int n = 0;
	int r = 0;

	cout << "Please enter n: ";
	cin >> n;

	cout << endl;
	cout << "Please enter r: ";
	cin >> r;

	vector<int> container;
	combination();

#pragma endregion

	return 0;
}