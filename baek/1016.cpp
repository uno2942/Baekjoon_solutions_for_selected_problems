/*#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

long long m, M;
long long temp;
int c;
int main() {
	cin >> m >> M;
	temp = sqrt(m);
	while (temp * temp > m)
		temp--;
	while (temp * temp < m)
		temp++;
	while (temp * temp <= M)
	{
		c++;
		temp++;
	}
	cout << M - m + 1 - c;
	return 0;
}
*/