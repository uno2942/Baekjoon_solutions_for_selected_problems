/*#include<cstdio>
#include<vector>
#include<algorithm>
#define N 320
using namespace std;

bool compare1(const pair<int, pair<int, pair<int, int>>>& a, const pair<int, pair<int, pair<int, int>>>& b)
{
	return a.second.first < b.second.first;
}

bool compare2(const pair<int, pair<int, pair<int, int>>>& a, const pair<int, pair<int, pair<int, int>>>& b)
{
	return a.first < b.first;
}

int main()
{
	int n, M;
	long long temp;
	vector<long long> arr;
	vector<long long> bucket;
	vector<pair<int, long long>> query1;
	vector<pair<int, pair<int, pair<int, int>>>> query2;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &temp);
		arr.push_back(temp);
	}
	while (n % N != 0)
	{
		arr.push_back(0);
		n++;
	}
	scanf("%d", &M);

	int count = 0;
	for (int i = 0; i < M; i++)
	{
		int inst1, inst2, inst4;
		long long inst3;
		scanf("%d", &inst1);
		switch (inst1)
		{
		case 1: scanf("%d %lld", &inst2, &inst3);  query1.push_back(make_pair(inst2, inst3)); break;
		case 2: scanf("%d %lld %d", &inst2, &inst3, &inst4), query2.push_back(make_pair(count, make_pair(inst2, make_pair((int)inst3, inst4)))); count++;
		}
	}

	for (int i = 0; i < n / N; i++)
	{
		long long sum = 0;
		for (int j = 0; j < N; j++)
		{
			sum += arr[j + N * i];
		}
		bucket.push_back(sum);
	}

	sort(query2.begin(), query2.end(), compare1);

	int pivot = 0;
	int s1 = query1.size();
	int s2 = query2.size();
	long long* ans = new long long[s2];
	for (int i = 0; i < s1; i++)
	{
		while (pivot != s2 && query2[pivot].second.first == i)
		{
			int start = query2[pivot].second.second.first - 1;
			int end = query2[pivot].second.second.second - 1;

			int sN = start / N;
			int eN = end / N + 1;
			long long sum = 0;
			for (int j = sN; j < eN; j++)
				sum += bucket[j];
			for (int j = 0; j < start - N * sN; j++)
				sum -= arr[j + N * sN];
			for (int j = 0; j < eN * N - end - 1; j++)
				sum -= arr[eN * N - 1 - j];
			ans[query2[pivot].first] = sum;
			pivot++;
		}

		bucket[(query1[i].first - 1) / N] -= arr[query1[i].first - 1];
		arr[query1[i].first - 1] = query1[i].second;
		bucket[(query1[i].first - 1) / N] += arr[query1[i].first - 1];
	}
	while (pivot != s2 && query2[pivot].second.first == s1)
	{
		int start = query2[pivot].second.second.first - 1;
		int end = query2[pivot].second.second.second - 1;

		int sN = start / N;
		int eN = end / N + 1;
		long long sum = 0;
		for (int j = sN; j < eN; j++)
			sum += bucket[j];
		for (int j = 0; j < start - N * sN; j++)
			sum -= arr[j + N * sN];
		for (int j = 0; j < eN * N - end - 1; j++)
			sum -= arr[eN * N - 1 - j];
		ans[query2[pivot].first] = sum;
		pivot++;
	}

	int ss2 = query2.size();
	for (int i = 0; i < ss2; i++)
	{
		printf("%lld\n", ans[i]);
	}
	delete[] ans;
	return 0;
}
*/