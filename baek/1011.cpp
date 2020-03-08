/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
long long temp1;
long long x,y;
long long temp;
long long m, M;
vector<long long> ans;
int main() {
	cin >> temp1;

	for (int i = 0; i < temp1; i++) {
		m = 1;
		M = 65540;
		temp = (M + m) / 2;
		cin >> x>>y;
		y = y - x;
		while (!(temp * temp < y && y <= (temp + 1) * (temp + 1) ))
		{
			temp = (M + m) / 2;
			if (temp * temp >= y)
				M = temp - 1;
			else
				m = temp + 1;
		}
		if (y <= temp * temp + temp)
			ans.push_back(2 * temp);
		else
			ans.push_back(2 * temp + 1);
	}
	for (int i = 0; i < temp1; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
*/