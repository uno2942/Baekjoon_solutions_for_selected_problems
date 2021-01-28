/*#include<cstdio>
#include<algorithm>
#include<vector>
#define myMAX 10000000000000000
using namespace std;

vector < pair<long long, long long>> arr;


bool compare_y(pair<long long, long long> a, pair<long long, long long> b)
{
	return a.second > b.second;
}

inline long long dist(pair<long long, long long> a, pair<long long, long long> b)
{
	return (a.second - b.second) * (a.second - b.second) + (a.first - b.first) * (a.first - b.first);
}

long long mymerge(int start, int mid, int end, long long temp_ans)
{
	long long ans = temp_ans;
	vector<pair<long long, long long>> temp;
	for (int i = start; i < end; i++)
	{
		if (abs((arr[i].first - arr[mid].first) * (arr[i].first - arr[mid].first)) < temp_ans)
			temp.push_back(arr[i]);
	}
	sort(temp.begin(), temp.end(), compare_y);

	int len = temp.size();
	for (int i = 0; i < len; i++)
	{
		for (int j = max(0, i - 5); j < min(len, i + 5); j++)
		{
			if (i == j)
				continue;
			ans = min(ans, dist(temp[i], temp[j]));
		}
	}
	return ans;
}

long long solve(int start, int end)
{
	if (end - start == 3)
		return min(dist(arr[start], arr[start + 1]), min(dist(arr[start], arr[start + 2]), dist(arr[start + 1], arr[start + 2])));
	else if (end - start == 2)
		return dist(arr[start], arr[start+1]);
	else if (end - start == 1)
		return myMAX;

	long long ans_l = solve(start, start + (end - start) / 2 + 1);
	long long ans_r = solve(start + (end - start) / 2, end);
	long long temp_ans = min(ans_l, ans_r);

	return mymerge(start, end - (end - start) / 2, end, temp_ans);
}
int main()
{
	int n;
	scanf("%d", &n);
	int temp_x, temp_y;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &temp_x, &temp_y);
		arr.push_back(make_pair(temp_x, temp_y));
	}
	sort(arr.begin(), arr.end());
	printf("%lld", solve(0, n));
	return 0;
}
*/