/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int N, t;
	cin >> N;
	vector<int> a;
	vector<int> b;
	for (int i = 0; i < N; i++)
	{
		cin >> t;
		a.push_back(t);
	}
	for (int i = 0; i < N; i++)
	{
		cin >> t;
		b.push_back(t);
	}

	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end(), less<int>());

	long long sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += a[i] * b[i];
	}
	cout << sum;
	return 0;
}
*/