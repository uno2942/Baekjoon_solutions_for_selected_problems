/*#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
long long dp[51][51]; // number of possible cases with extra ')'
long long pos[51];
long long Comb[51][51];
int N;
long long now;
long long K;
string ans;

inline int is_big(long long a, long long b)
{
	if (a > b)
		return 1;
	else if (a < b)
		return 2;
	return 0;
}


void Calc_Comb()
{
	for (int i = 0; i < 51; i++)
	{
		Comb[i][0] = 1;
	}
	for (int i = 0; i < 51; i++)
	{
		for (int j = i + 1; j < 51; j++)
			Comb[i][j] = 0;
	}
	for (int i = 1; i < 51; i++)
	{
		for (int j = 0; j <= i; j++)
			Comb[i][j] = Comb[i - 1][j - 1] + Comb[i - 1][j];
	}
}
//from https://stackoverflow.com/questions/1505675/power-of-an-integer-in-c
long long myPow(long long x, long long p)
{
	if (p == 0) return 1;
	if (p == 1) return x;

	long long tmp = myPow(x, p / 2);
	if (p % 2 == 0) return tmp * tmp;
	else return x * tmp * tmp;
}

void find_ans()
{
	long long temp = 0;
	int front_left = 0;
	int front_right = 0;
	bool perm = false;
	int left = N;
	while (left != 0)
	{
		//if '(' pushed back

		front_left++;
		temp = myPow(2, left - 1);
		if (!perm)
		{
			temp -= (dp[front_left - front_right][left - 1]);
		}
		switch (is_big(K, now + temp))
		{
		case 0: ans.push_back('('); left--;
			if (!perm && left == (front_left - front_right) && left >= 1)
			{
				while (left != 1)
				{
					ans.push_back(')'); left--;
				}
				ans.push_back('(');
			}
			else
				for (int i = 0; i < left; i++) ans.push_back(')');
			return;
		case 2: ans.push_back('(');
				break;
		case 1: now += temp; 
				ans.push_back(')');
				front_left--; front_right++;
				if (!perm && front_right > front_left)
					perm = true;
				break;
		}
		left--;
	}
	if (K > now + 1)
	{
		ans.clear();
		ans.append("-1");
	}
	
//	cout << now << ' ' << myPow(2, N) - dp[0][N] << endl;
}
int main()
{
	cin >> N >> K;
	K++;
	dp[0][2] = 1;
	dp[0][0] = 1;
	for (int i = 1; i < 51; i += 2)
	{
		dp[0][i] = 0;
	}
	for (int i = 0; i < 51; i++)
	{
		for (int j = i + 1; j < 51; j++)
			dp[j][i] = 0;
	}
	for (int i = 4; i < 51; i += 2)
	{
		for (int j = 0; j < i; j += 2)
		{
			dp[0][i] += (dp[0][j] * dp[0][i - j - 2]);
		}
	}
	Calc_Comb();
	for (int i = 1; i < 51; i++)
	{
		for (int j = i; j < 51; j++)
		{
			for (int l = 1; l <= j; l++)
			{
				dp[i][j] += (dp[0][j - l] * dp[i - 1][l - 1]);
			}
		}
	}
	find_ans();
	cout << ans;
	return 0;

}
*/