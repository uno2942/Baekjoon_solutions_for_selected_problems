/*#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define MY_MAX 1000000000001LL;
using namespace std;

long long temp1, target;
vector<long long> pin;
vector<long long> dou;

long long weight[202][202];
bool cap[202][202];
vector<int> graph[202];
int level[202];
int backup[202];

bool bfs()
{
	queue<int> q;
	for (int i = 0; i < temp1 * 2 + 2; i++)
	{
		level[i] = -1;
	}

	level[0] = 0;
	q.push(0);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		for (int i : graph[now])
		{
			if (level[i] == -1 && cap[now][i] && weight[now][i] >= target)
			{
				q.push(i);
				level[i] = level[now] + 1;
			}
		}
	}
	return (level[2 * temp1 + 1] != -1);
}

bool dfs(int now)
{
	if (now == 2 * temp1 + 1)
		return true;
	int s = graph[now].size();
	int next;
	for (int &i = backup[now]; i<s; i++)
	{
		next = graph[now][i];
		if (level[now] + 1 == level[next] && cap[now][next] && weight[now][next] >= target && dfs(next))
		{
//			cout << now << ' ' << next << ' ' << weight[now][next]<< endl;
			cap[now][next] = false;
			cap[next][now] = true;
			return true;
		}
	}
	return false;
}

bool find_matching()
{
//	cout << target << endl;
	int flow = 0;
	for (int i = 1; i < temp1 + 1; i++)
	{
		cap[0][i] = true;
		cap[i][0] = false;
		cap[i + temp1][2 * temp1 + 1] = true;
		cap[2 * temp1 + 1][i + temp1] = false;
	}

	for (int i = 1; i < temp1 + 1; i++)
	{
		for (int j = temp1 + 1; j < 2 * temp1 + 1; j++)
		{
			cap[i][j] = true;
			cap[j][i] = false;
		}
	}

	while (bfs())
	{
		fill(backup, backup + 2 * temp1 + 2, 0);
		while (1)
		{
			if (!dfs(0))
				break;
			flow++;
		}
	}
	if (flow == temp1)
		return true;
	return false;
}


int main()
{
	long long temp;
	cin >> temp1;
	
	for (int i = 0; i < temp1; i++)
	{
		cin >> temp;
		pin.push_back(temp);
	}
	for (int i = 0; i < temp1; i++)
	{
		cin >> temp;
		dou.push_back(temp);
	}

	for (int i = 1; i < temp1 + 1; i++)
	{
		weight[0][i] = MY_MAX;
		weight[i][0] = MY_MAX;
		weight[i + temp1][2 * temp1 + 1] = MY_MAX;
		weight[2 * temp1 + 1][i + temp1] = MY_MAX;
		graph[0].push_back(i);
		graph[i].push_back(0);
		graph[i + temp1].push_back(2 * temp1 + 1);
		graph[2 * temp1 + 1].push_back(i + temp1);
	}

	for (int i = 1; i < temp1 + 1; i++)
	{
		for (int j = temp1 + 1; j < 2 * temp1 + 1; j++)
		{
			weight[i][j] = pin[i - 1] ^ dou[j - temp1 - 1];
			weight[j][i] = weight[i][j];
			graph[i].push_back(j);
			graph[j].push_back(i);
		}
	}

	long long beg = 0;
	long long end = 100000000000LL;
	while (beg < end)
	{
		target = (beg + end) / 2ll;
		if (find_matching())
			beg = target + 1ll;
		else
			end = target - 1ll;
	}
	target = (beg + end) / 2;
	if (find_matching())
		cout << target;
	else
	{
		target--;
		cout << target;
	}
	return 0;
}
*/