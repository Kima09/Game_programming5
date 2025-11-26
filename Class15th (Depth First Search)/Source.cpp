#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;

template<typename T>
class Graph
{
private:
	unordered_set<T> visited;
	unordered_map<T, vector<T>> adjacencyList;

public:
	void insert(const T& i, const T& j)
	{
		adjacencyList[i].push_back(j);
		adjacencyList[j].push_back(i);
	}
	void search(const T& start)
	{
		if (visited.count(start))
		{
			return;
		}
		visited.insert(start);
		cout << start << " ";
		for (const T& element : adjacencyList[start])
		{
			if (visited.count(element) == false)
			{
				search(element);
			}
		}
	}
};

int main()
{
#pragma region 깊이 우선 탐색 (Depth First Search)
	//그래프에서 한 방향으로 갈 수 있을만큼 깊이 들어갔다가,
	//더 이상 갈 수 없는 경우 다시 돌아와
	//다른 경로를 탐색하는 방법입니다.

	Graph<char> graph;
	graph.insert('A', 'B');
	graph.insert('A', 'C');
	graph.insert('D', 'B');
	graph.insert('E', 'B');
	graph.insert('C', 'F');
	graph.insert('G', 'C');

	graph.search('A');

#pragma endregion


	return 0;
}