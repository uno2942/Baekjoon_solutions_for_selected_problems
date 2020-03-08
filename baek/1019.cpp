/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long real_ans[10];
long long my_count(long long num, long long i)
{
	long long m = 1;
	long long temp_f;
	long long ans = 0;
	while (1)
	{
		temp_f = (num - (i * m)) / (10 * m);
		if (i == 0 && temp_f <= 0)
			break;
		else if (i != 0 && num - (i * m) < 0)
			break;
		ans -= max(temp_f * 10 * m + (m - 1) - (num - (i * m)), 0ll);
		if (i != 0)
			temp_f++;
		ans += (temp_f * m);
		m *= 10;
	}
	return ans;
}
int main()
{
	long long num;
	cin >> num;
	for (int i = 0; i <= 9; i++)
	{
		cout << my_count(num, i) << ' ';
	}
}
*/