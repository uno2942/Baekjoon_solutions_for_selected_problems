/*#include<iostream>
#include<vector>

using namespace std;

bool arr[51][51];
int N, M;

inline void neg(int j)
{
	for (int i = 0; i < N; i++)
	{
		arr[i][j] = !arr[i][j];
	}
}

int count_line()
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		bool flag = true;
		for (int j = 0; j < M; j++)
		{
			if (!arr[i][j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			count++;
	}
	return count;
}

int main()
{
	char temp;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> temp;
			if (!(temp-'1'))
			{
				arr[i][j] = true;
			}
		}
	}
	int K;
	cin >> K;
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		int count = 0;
		vector<int> bucket;
		for (int j = 0; j < M; j++)
		{
			if (!arr[i][j])
			{
				bucket.push_back(j);
				count++;
				neg(j);
			}
		}
		if (count <= K && (K - count) % 2 == 0)
			ans = max(ans, count_line());
		for (int j : bucket)
			neg(j);
	}
	cout << ans;
	return 0;
}
*/