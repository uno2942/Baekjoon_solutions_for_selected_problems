/*#include<iostream>
#include<vector>
#include<algorithm>
#define MY_MAX 8
using namespace std;

int X, Y;

bool can[50][50];

int dp[50][50];

int count(int y, int x)
{
	int c = 0;
	for (int i = 0; i < MY_MAX; i++)
	{
		for (int j = 0; j < MY_MAX; j++)
		{
			if ((i + j) % 2 == 0 && !can[y+i][x+j])
				c++;
			else if ((i + j) % 2 != 0 && can[y+i][x+j])
				c++;
		}
	}
	return c;
}

int count2y(int y, int x)
{
	int c = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < MY_MAX; j++)
		{
			if ((i + j) % 2 == 0 && !can[y + i][x + j])
				c++;
			else if ((i + j) % 2 != 0 && can[y + i][x + j])
				c++;
		}
	}
	return c;
}

int count2x(int y, int x)
{
	int c = 0;
	for (int i = 0; i < MY_MAX; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if ((i + j) % 2 == 0 && !can[y + i][x + j])
				c++;
			else if ((i + j) % 2 != 0 && can[y + i][x + j])
				c++;
		}
	}
	return c;
}
int count1x(int y, int x)
{
	int c = 0;
	for (int i = 0; i < MY_MAX; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			if ((i + j) % 2 == 0 && !can[y + i][x + j])
				c++;
			else if ((i + j) % 2 != 0 && can[y + i][x + j])
				c++;
		}
	}
	return c;
}
int main()
{
	char temp;
	cin >> Y >> X;
	for (int i = 0; i < Y; i++)
	{
		for (int j = 0; j < X; j++)
		{
			cin >> temp;
			if (temp == 'W')
				can[i][j] = false;
			else
				can[i][j] = true;
		}
	}

	dp[0][0] = count(0, 0);
	if(Y>=9)
		dp[1][0] = count(1, 0);
	for (int i = 2; i <= Y - 8; i += 2)
	{
		dp[i][0] = dp[i - 2][0] - count2y(i - 2, 0) + count2y(i + 6, 0);
	}
	for (int i = 3; i <= Y - 8; i += 2)
	{
		dp[i][0] = dp[i - 2][0] - count2y(i - 2, 0) + count2y(i + 6, 0);
	}
	if (X >= 9)
	{
		for (int i = 0; i <= Y - 8; i++)
		{
			dp[i][1] = (64 - dp[i][0]) - (8 - count1x(i, 0)) + (8 - count1x(i, 8));
		}
	}
	for (int i = 0; i <= Y - 8; i++)
	{
		for (int j = 2; j <= X - 8; j += 2)
		{
			dp[i][j] = dp[i][j - 2] - count2x(i, j - 2) + count2x(i, j + 6);
		}
		for (int j = 3; j <= X - 8; j += 2)
		{
			dp[i][j] = dp[i][j - 2] - count2x(i, j - 2) + count2x(i, j + 6);
		}
	}
	int m = 64;
	for (int i = 0; i <= Y -8 ; i++)
	{
		for (int j = 0; j <= X - 8; j++)
			m = min(min(dp[i][j], m), 64 - dp[i][j]);
	}
	cout << m;
}
*/