/*#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
int j = 1;

void fix(long long *A, pair<long long, int>* B, int i, long long v)
{
	A[i] = v;
	if (i % 2 == 0)
	{
		B[(i + j) / 2].first = min(A[i], A[i + 1]);
		if (A[i] <= A[i + 1])
			B[(i + j) / 2].second = i;
		else
			B[(i + j) / 2].second = i+1;
	}
	else
	{
		B[(i + j) / 2].first = min(A[i], A[i - 1]);
		if (A[i - 1] <= A[i])
			B[(i + j) / 2].second = i - 1;
		else
			B[(i + j) / 2].second = i;
	}
	
	int p = (i + j) / 4;
	while (p >= 1)
	{
		B[p].first = min(B[2 * p].first, B[2 * p + 1].first);
		if (B[2 * p].first <= B[2 * p + 1].first)
			B[p].second = B[2 * p].second;
		else
			B[p].second = B[2 * p + 1].second;
		p /= 2;
	}
	return;
}
int main()
{
	int N;
	long long temp;

	scanf("%d", &N);
	while (j < N)
	{
		j *= 2;
	}
	if (N == 1)
		j = 2;
	long long* A = new long long[j];
	for (int i = 0; i < N; i++)
	{
		scanf("%lld", &temp);
		A[i] = temp;
	}
	pair<long long, int>* B = new pair<long long, int>[j];
	vector<long long> ans;
	vector<pair<int, pair<int, long long>>> inst;

	int M;
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		int inst1, inst2;
		long long inst3;
		scanf("%d", &inst1);
		switch (inst1)
		{
		case 1: scanf("%d %lld", &inst2, &inst3);
			inst.push_back(make_pair(inst1, make_pair(inst2, inst3)));
			break;
		case 2: inst.push_back(make_pair(2, make_pair(0, 0)));
			break;
		}
	}

	for (int i = N; i < j; i++)
	{
		A[i] = 10000000000ll;
	}

	for (int i = j - 1; i >= j/2; i--)
	{
		B[i].first = min(A[2 * i - j], A[2 * i - j + 1]);
		if (A[2 * i - j] <= A[2 * i - j + 1])
			B[i].second = 2 * i - j;
		else
			B[i].second = 2 * i - j + 1;
	}

	for (int i = j/2-1; i >= 1; i--)
	{
		B[i].first = min(B[2 * i].first, B[2 * i + 1].first);
		if (B[2 * i].first <= B[2 * i + 1].first)
			B[i].second = B[2 * i].second;
		else
			B[i].second = B[2 * i + 1].second;
	}

	for (int i = 0; i < M; i++)
	{
		switch (inst[i].first)
		{
		case 1: fix(A, B, inst[i].second.first - 1, inst[i].second.second);
			break;
		case 2: ans.push_back(B[1].second + 1);
			break;
		}
	}
	for (int i = 0; i < ans.size(); i++)
		printf("%lld\n", ans[i]);
	delete[] A;
	delete[] B;
	return 0;
}*/