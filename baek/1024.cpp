/*#include<iostream>
#include<algorithm>
#define MAX 45000
using namespace std;

int main()
{
	long long N, L;
	long long ans = 101;
	cin >> N >> L;

	long long start;
	for (long long i = L; i < 101; i++)
	{
		start = (i * (i - 1)) / 2;
		if (N < start)
			break;
		if ((N - start) % i == 0)
		{
			ans = min(i, ans);
		}
	}
	if (ans == 101)
	{
		cout << -1;
		return 0;
	}
	start = (ans * (ans - 1)) / 2;
	long long M = (N - start) / ans;
	for (int i = 0; i < ans; i++)
	{
		cout << M + i << ' ';
	}
	return 0;
}
*/