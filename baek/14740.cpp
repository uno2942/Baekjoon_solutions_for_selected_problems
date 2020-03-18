/*#include<algorithm>
#include<vector>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long temp;
	int ans = 0;
	long long m = LLONG_MAX;
	long long front_temp = 0;
	vector<long long> oil;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		oil.push_back(temp);
	}
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		oil[i] -= temp;
	}
	temp = 0;
	for (int i = 0; i < N; i++)
	{
		temp += oil[i];
		m = min(m, temp);
	}

	for (int i = 0; i < N; i++)
	{
		front_temp -= oil[i];
		if (m + front_temp >= 0)
			ans++;
	}
	cout << ans;
}
*/