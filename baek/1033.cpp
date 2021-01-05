/*#include<iostream>
#include<vector>
#include<algorithm>
#define rational pair<long long, long long>

using namespace std;

vector<int> graph[11];
rational edge[11][11];
rational ans[11];
bool visited[11];

long long gcd(long long a, long long b)
{
	if (a < b)
	{
		long long temp = a;
		a = b;
		b = temp;
	}

	long long n;
	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}
long long lcm(long long a, long long b)
{
	long long temp = a * b;
	return temp / (gcd(a, b));
}

rational mult(rational& a, rational& b)
{
	rational temp;
	temp.second = a.second * b.second;
	temp.first = a.first * b.first;
	long long t = gcd(temp.first, temp.second);
	temp.first /= t;
	temp.second /= t;
	return temp;
}

rational inv(rational& a)
{
	rational temp;
	temp.first = a.second;
	temp.second = a.first;
	return temp;
}

void swap(int* temp1, int* temp2)
{
	int temp = *temp1;
	*temp1 = *temp2;
	*temp2 = temp;
}

void dfs(int start)
{
	for (int to : graph[start])
	{
		if (visited[to])
			continue;
		visited[to] = true;
		ans[to] = mult(ans[start], edge[start][to]);
		dfs(to);
	}
}

int main()
{
	int N;
	int temp1, temp2, temp3, temp4;
	cin >> N;

	if (N == 1)
	{
		cout << 1;
		return 0;
	}
	for (int i = 0; i < N-1; i++)
	{
		cin >> temp1 >> temp2>>temp3>>temp4;
		graph[temp1].push_back(temp2);
		graph[temp2].push_back(temp1);
		edge[temp1][temp2] = rational(temp4, temp3);
		edge[temp2][temp1] = rational(temp3, temp4);
	}

	int start = 0;
	for (int i = 0; i < N; i++)
		visited[i] = false;
	visited[start] = true;
	ans[0].first = 1; ans[0].second = 1;
	dfs(start);
	long long denom = 1;
	for (int i = 0; i < N; i++)
	{
		denom = lcm(denom, ans[i].second);
	}
	for (int i = 0; i < N; i++)
	{
		rational t = make_pair(denom, 1);
		ans[i] = mult(ans[i], t);
	}
	long long comm = ans[0].first;
	for (int i = 1; i < N; i++)
	{
		comm = gcd(comm, ans[i].first);
	}

	for (int i = 0; i < N; i++)
	{
		cout << ans[i].first/comm << ' ';
	}
	return 0;
}
*/