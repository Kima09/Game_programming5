#include <iostream>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;

template<typename T>
class Graph
{
private:
	unordered_map<T, vector<T>> adjacencyList;
	unordered_map<T, int> degree;
public:
	void insert(const T& i, const T& j)
	{
		adjacencyList[i].push_back(j);
		degree[j]++;
	}
	
};

int main()
{
#pragma region 위상 정렬
	//병합 그래프에 존재하는 각 정점들의 선행 순서를 지키며,
	//모든 정점을 차례대로 진행하는 방식의 정렬입니다.

	//사이클이 발생하는 경우 위상 정렬을 수행할 수 없습니다.

	//DAG(Directed Acyclic Graph): 사이클이 존재하지
	//않는 그래프

	//시간 복잡도: O(V + E)
	//위상 정렬하는 방법
	//1. 진입 차수가 0인 정점을 큐에 삽입
	//2. 큐에서 원소를 꺼내 연결된 모든 간선을 제거
	//3. 간선 제거 이후 진입 차수가 0이 된 정점을 큐에 삽입
	//4. 큐가 비어있을 때까지 2-3번 작업 반복
#pragma endregion


	return 0;
}