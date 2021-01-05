/*#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

string str[55];

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
	}
	int len = str[0].length();
	string ans;
	for (int i = 0; i < len; i++)
	{
		bool flag = true;
		char c = str[0][i];
		for (int j = 1; j < N; j++)
		{
			if (c != str[j][i])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			ans += c;
		else
			ans += '?';
	}
	cout << ans;
	return 0;
}
*/