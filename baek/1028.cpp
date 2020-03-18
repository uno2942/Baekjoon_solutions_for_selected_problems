/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool pool[750][750];
int rd[750][750];
int ld[750][750];
int main()
{
	int R, C;
	char d;
	cin >> R >> C;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> d;
			if (d - '0')
				pool[i][j] = true;
		}
	}
	_ASSERT(R <= 750);
	_ASSERT(C <= 750);

	for (int j = 0; j < C; j++)
	{
		if (pool[R - 1][j])
		{
			ld[R - 1][j] = 1;
			rd[R - 1][j] = 1;
		}
	}
	for (int i = 0; i < R - 1; i++)
	{
		if (pool[i][0])
			ld[i][0] = 1;
		if (pool[i][C - 1])
			rd[i][C - 1] = 1;
	}
	for (int j = 0; j < C - 1; j++)
	{
		for (int i = 1; i <= R - 1; i++)
		{
			if (j + i >= C)
				break;
			if (pool[R - 1 - i][j + i])
				ld[R - 1 - i][j + i] = 1 + ld[R - i][j + i - 1];
		}
	}

	for (int i = R-2; i>=1; i--)
	{
		for (int j = 1; j <= C - 1; j++)
		{
			if (i - j < 0)
				break;
			if (pool[i - j][j])
				ld[i - j][j] = 1 + ld[i - j + 1][j - 1];
		}
	}

	for (int j = 1; j < C; j++)
	{
		for (int i = 1; i < R; i++)
		{
			if (j - i < 0)
				break;
			if (pool[R - 1 - i][j - i])
				rd[R - 1 - i][j - i] = 1 + rd[R - i][j - i + 1];
		}
	}

	for (int i = R - 2; i >= 1; i--)
	{
		for (int j = 1; j < C; j++)
		{
			if (i - j < 0)
				break;
			if (pool[i - j][C - 1 - j])
				rd[i - j][C - 1 - j] = 1 + rd[i - j + 1][C - 1 - j + 1];
		}
	}

	int m = min(R, C) / 2;
	int ma = 0;
	for (int i = 0; i < R - ma; i++)
	{
		for (int j = 0; j < C - ma; j++)
		{
			if (!pool[i][j])
				continue;

			int temp_max = min(ld[i][j], rd[i][j]);
			for (int k = temp_max - 1; k >=0 ; k--)
			{
				if (rd[i + k][j - k] >= (k + 1) && ld[i + k][j + k] >= (k + 1))
				{
					ma = max(ma, k + 1);
					break;
				}
			}
		}
	}
	cout << ma;
	return 0;
}
*/