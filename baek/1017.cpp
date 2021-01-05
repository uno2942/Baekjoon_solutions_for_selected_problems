/*#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int che[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
vector<int> graph[55];
vector<int> A;
vector<int> arr;
int match[55];
bool visited[55];
int fix;
bool is_prime(int num)
{
	for (int i = 0; i < 15; i++)
	{
		if (num % che[i] == 0)
		{
			if (num == che[i])
				return true;
			return false;
		}
	}
	return true;
}

bool dfs(int now)
{
	if (visited[now])
		return false;
	visited[now] = true;
	for (int to : graph[now])
	{
		if (to == 0)
			continue;
		if (match[to] == -1 || dfs(match[to]))
		{
			match[to] = now;
			return true;
		}
	}
	return false;
}

int matching()
{
	int res = 0;
	match[0] = fix;
	res++;
	for (int a : A)
	{
		if (a == fix)
			continue;
		for (int i = 0; i < 55; i++)
			visited[i] = false;
		if (dfs(a)) res++;
	}
	return res;
}
int main()
{
	int N;
	int temp;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}

	for (int i = 0; i < N; i++)
	{
		for(int j=i+1; j<N; j++)
			if (is_prime(arr[i] + arr[j]))
			{
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 != arr[0] % 2)
		{
			A.push_back(i);
		}
	}
	
	if (graph[0].empty())
	{
		cout << -1;
		return 0;
	}
	bool flag = false;
	vector<int> ans;
	while (!graph[0].empty())
	{
		for(int i=0; i<N; i++)
			match[i] = -1;

		fix = graph[0][0];
		if (matching() == N / 2)
		{
			ans.push_back(arr[fix]);
			flag = true;
		}
		graph[fix].erase(graph[fix].begin(), graph[fix].begin() + 1);
		graph[0].erase(graph[0].begin(), graph[0].begin()+1);
	}
	if (!flag)
	{
		cout << -1;
		return 0;
	}
	sort(ans.begin(), ans.end());
	for (int n : ans)
		cout << n << ' ';
	return 0;
}
*/