/*#include<cstdio>
#include<climits>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

vector<pair<int, long long>> graph[502];
vector<pair<int, bool>> graph_usable[502];
vector<pair<int, long long>> graph_rev[502];
vector<pair<int, bool>> graph_rev_usable[502];
vector<long long> ans;
long long dist_from_S[502];
long long dist_from_D[502];

long long min_dist;
void dijkstra(int S, int D, vector<pair<int, long long>>* dij_graph, vector<pair<int, bool>>* dij_graph_usable, long long* dist)
{
	priority_queue<pair<long long, int>> pq;

	pq.push(make_pair(0, S));
	while (!pq.empty())
	{
		pair<long long, int> temp = pq.top();
		pq.pop();
		if (-temp.first >= dist[temp.second])
			continue;
		dist[temp.second] = -temp.first;
		int size = dij_graph[temp.second].size();
		for (int i=0; i<size; i++)
		{
			if (!dij_graph_usable[temp.second][i].second)
				continue;
			if (dist[dij_graph[temp.second][i].first] > -temp.first + dij_graph[temp.second][i].second)
			{
				pq.push(make_pair(temp.first - dij_graph[temp.second][i].second, dij_graph[temp.second][i].first));
			}
		}
	}
}
int main()
{
	int N, M, S, D;
	int U, V, P;
	scanf("%d %d", &N, &M);
	while (N != 0)
	{
		scanf("%d %d", &S, &D);
		for (int i = 0; i < M; i++)
		{
			scanf("%d %d %d", &U, &V, &P);
			graph[U].push_back(make_pair(V, P));
			graph_usable[U].push_back(make_pair(V, 1));
			graph_rev[V].push_back(make_pair(U, P));
			graph_rev_usable[V].push_back(make_pair(U, 1));
		}
		for (int i = 0; i < N; i++)
		{
			dist_from_S[i] = LLONG_MAX;
			dist_from_D[i] = LLONG_MAX;
		}
		min_dist = LLONG_MAX;
		dijkstra(S, D, graph, graph_usable, dist_from_S);
		dijkstra(D, S, graph_rev, graph_rev_usable, dist_from_D);
		min_dist = dist_from_S[D];

		for (int i = 0; i < N; i++)
		{
			int size = graph[i].size();
			for (int j=0; j<size ;j++)
			{
				if (dist_from_S[i] + graph[i][j].second + dist_from_D[graph[i][j].first] == min_dist)
					graph_usable[i][j].second = 0;
			}
		}

		for (int i = 0; i < N; i++)
		{
			dist_from_S[i] = LLONG_MAX;
		}
		dijkstra(S, D, graph, graph_usable, dist_from_S);
		if (dist_from_S[D] == LLONG_MAX)
			ans.push_back(-1);
		else
			ans.push_back(dist_from_S[D]);

		for (int i = 0; i < N; i++)
		{
			graph[i].clear();
			graph_rev[i].clear();
			graph_usable[i].clear();
			graph_rev_usable[i].clear();
		}
		scanf("%d %d", &N, &M);
	}
	int s = ans.size();
	for (int i = 0; i < s; i++)
		printf("%lld\n", ans[i]);
	return 0;
}
*/