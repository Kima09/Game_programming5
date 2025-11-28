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
	unordered_set<T> vertices;
public:
	void insert(const T& i, const T& j)
	{
		adjacencyList[i].push_back(j);
		degree[j]++;
		vertices.insert(i);
		vertices.insert(j);

		if (degree.count(i) == false)
		{
			degree[i] = 0;
		}
	}
	void sort()
	{
		queue<T> queue;

		for (const T& i: vertices)
		{
			if (degree[i] == 0)
			{
				queue.push(i);
			}
		}

		//if (queue.empty())
		//{
		//	cout << "Cycle has occured" << endl;
		//}

		while (!queue.empty())
		{
			T i = queue.front();
			for (const T& c : adjacencyList[i])
			{
				degree[c] -= 1;
				if (degree[c] == 0)
				{
					queue.push(c);
				}
			}
			
			cout << i << " ";

			queue.pop();

			//하단: 사이클 확인
			vertices.erase(i);
			//vertices의 노드까지 지우는 코드, 사이클 확인 시 사용
			if (!vertices.empty() && queue.empty())
			{
				cout <<endl << "Cycle has occured" << endl;
				break;
			}
		}
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

	Graph<int> graph;
	
	graph.insert(7, 3);

	graph.insert(3, 4);

	graph.insert(4, 6);

	graph.insert(6, 3);

	graph.sort();
#pragma endregion


	return 0;
}