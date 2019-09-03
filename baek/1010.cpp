/*#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

int temp1;
int n, k;
vector<long long> ans;
long long val[30][30];
int main() {

	cin >> temp1;
	val[0][0] = 1;
	for (int j = 1; j < 30; j++) {
		val[j][0] = 1;
		val[0][j] = 0;
		val[j][j] = 1;
	}

	for (int n = 1; n < 30; n++) {
		for (int k = 1; k <= (n+1)/2; k++)
		{
			val[n][k] = val[n - 1][k - 1] + val[n - 1][k];
			val[n][n - k] = val[n][k];
		}
	}
	for (int i = 0; i < temp1; i++) {
		cin >> k >> n;
		if (k > n / 2)
			k = n - k;
		ans.push_back(val[n][k]);
	}
	for (int i = 0; i < temp1; i++) {
		cout << ans[i]<<endl;
	}
	return 0;
}
*/