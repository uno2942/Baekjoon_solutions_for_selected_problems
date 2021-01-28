/*#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[100002];
vector<int> ans;
int ancestor[100002][20];
int depth[100002];
bool discover[100002];
int N, M;

void bfs()
{
	queue<int> q;
	q.push(1);
	discover[1] = true;
	depth[1] = 1;
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		for (int to : graph[now])
		{
			if (discover[to])
				continue;
			q.push(to);
			discover[to] = true;
			depth[to] = depth[now] + 1;
			int temp = 0;
			ancestor[to][0] = now;
			int anc_now = now;
			for (int i = 1; i < 20; i++)
			{
				ancestor[to][i] = ancestor[anc_now][i - 1];
				anc_now = ancestor[to][i];
			}
		}
	}
}
int main()
{
	scanf("%d", &N);
	int a, b;
	for (int i = 0; i < N-1; i++)
	{
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	bfs();
	int M;

	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		if (depth[a] < depth[b])
		{
			int temp = b;
			b = a;
			a = temp;
		}

		for (int j = 19; j >= 0; j--)
		{
			if (depth[ancestor[a][j]] >= depth[b])
				a = ancestor[a][j];
		}
		for (int j = 19; j >= 0; j--)
		{
			if (ancestor[a][j] != ancestor[b][j])
			{
				a = ancestor[a][j];
				b = ancestor[b][j];
			}
		}
		if (a == b)
			ans.push_back(a);
		else
			ans.push_back(ancestor[a][0]);
	}
	for (int i = 0; i < M; i++)
	{
		printf("%d\n", ans[i]);
	}

	return 0;

}*/