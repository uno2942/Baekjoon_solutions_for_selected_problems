/*#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int temp1, temp2;
int N, K;
int X, Y, W;
vector<int> graph[1005];
int inverseCount[1005];
vector<int> times;
vector<int> endNodes;
priority_queue< pair<int, int>, vector< pair<int, int>>, greater< pair<int, int>>> pq;
int t;
bool isSingle[1005][1005];
vector<int> ans;
int now;


int main() {
	cin >> temp1;
	for (int i = 0; i < temp1; i++) {
		cin >> N >> K;
		times.push_back(0);
		for (int j = 0; j < N; j++) {
			cin >> temp2;
			times.push_back(temp2);
		}
		for (int j = 0; j < K; j++) {
			cin >> X >> Y;
			if (!isSingle[X][Y])
			{
				graph[X].push_back(Y);
				inverseCount[Y]++;
				isSingle[X][Y] = true;
			}
		}
		cin >> W;

		for (int j = 1; j <= N; j++) {
			if (inverseCount[j] == 0)
			{
				graph[0].push_back(j);
				inverseCount[j]++;
			}
		}

		pq.push({ 0, 0 });
		t = 0;
		while (!pq.empty())
		{
			now = pq.top().second;
			t = pq.top().first;
			pq.pop();
			for (int k = 0; k < graph[now].size(); k++) {
				inverseCount[graph[now][k]]--;
				if (inverseCount[graph[now][k]] == 0)
				{
					if (graph[now][k] == W)
					{
						t += times[W];
						goto esc;
					}
					pq.push({ t + times[graph[now][k]], graph[now][k] });
				}
			}
		}
	esc:
		while (!pq.empty())
			pq.pop();

		ans.push_back(t);

		for (int j = 1; j <= N; j++) {
			for (int k = 0; k < graph[j].size(); k++) {
				isSingle[j][graph[j][k]] = false;
			}
		}
		for (int j = 0; j < N + 1; j++)
		{
			graph[j].clear();
			inverseCount[j] = 0;
		}
		times.clear();
	}
	for (int i = 0; i < temp1; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
*/