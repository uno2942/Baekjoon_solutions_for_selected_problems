/*#include<iostream>
#include<vector>
using namespace std;
long long temp1;
long long t;
vector<int> ans;
vector<int>fibo;
int main() {
	cin >> temp1;
	fibo.push_back(0);
	fibo.push_back(1);
	for (int i = 0; i < 40; i++) {
		fibo.push_back(fibo[i + 1] + fibo[i]);
	}
	for (int i = 0; i < temp1; i++) {
		cin >> t;
		ans.push_back(t);
	}
	for (int i = 0; i < temp1; i++) {
		t = ans[i];
		if (t == 0)
			cout << 1 << ' ' << 0 << endl;
		else if (t == 1)
			cout << 0 << ' ' << 1 << endl;
		else
			cout << fibo[t - 1] << ' ' << fibo[t] << endl;
	}
	ans.clear();
	return 0;
}
*/