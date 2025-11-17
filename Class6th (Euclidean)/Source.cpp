#include <iostream>

using namespace std;

int function(int x, int y)
{
	//두 자연수 x, y가 있을 때
	//x, y를 나눈 나머지는 r

	//r이 0이라면, x와 y의 최대공약수가 y

	//r이 0이 아니라면, x와 y의 최대 공약수는 y와 r의
	//최대 공약수와 같기 때문에 x에는 y그리고 y에는
	//r을 대입한 후 1번으로 돌아가면 됩니다.

	if (y == 0)
	{
		return x;
	}
	else
	{
		return function(y, x % y);
	}
}

int main()
{
#pragma region 유클리드 호제법
	//2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로
	//두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다.

		//int list[] = {24, 36};
		//int res = 1;
		//int pow = 1;
		//while (pow == 1)
		//{
		//	pow = 0;
		//	for (int i = 2;i <= list[0] && i <= list[1];i++)
		//	{
		//		if (list[0] % i == 0 && list[1] % i == 0)
		//		{
		//			res = res * i;
		//			list[0] = list[0] / i;
		//			list[1] = list[1] / i;
		//			pow = 1;
		//			break;
		//		}
		//	}
		//	if (pow == 0)
		//	{
		//		break;
		//	}
		//}
		//cout << res << endl;

		//int x = 2304;
		//int y = 1440;
		//int result = 1;
		//for (int i = 1;i <= x && i <= y;i++)
		//{
		//	if (x % i == 0 && y % i == 0)
		//	{
		//		result = result = i;
		//	}
		//}
		//cout << "Greatest Common Divisor: " << result << endl;
		//시간 복잡도: n
		//로그 n으로 줄이기 위해 유클리드 호제법 사용

	cout << function(106, 16) << endl;

#pragma endregion


	return 0;
}