/*#include<iostream>
#include<vector>
using namespace std;

bool select_pos[5][5];
int select_dist[5];
vector<int> pos;
int ans=10000;
int mycount = 0;

int dist(int a, int b)
{
	int temp = 0;
	temp += abs(a % 5 - b % 5);
	temp += abs(a / 5 - b / 5);
	return temp;
}


void calc_dist_aux(int count_aux, int d, const vector<int>& po)
{
	if (count_aux == 0)
	{
		ans = min(ans, d);
		return;
	}
	for (int i = 0; i < mycount; i++)
	{
		bool flag = true;
		for (int j = 0; j < mycount-count_aux; j++)
		{
			if (i == select_dist[j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			select_dist[mycount-count_aux] = i;
			calc_dist_aux(count_aux - 1, d + dist(po[mycount - count_aux], pos[i]), po);
			select_dist[mycount - count_aux] = -1;
		}
	}
}
void calc_dist(const vector<int>& po)
{
	for (int i = 0; i < mycount; i++)
		select_dist[i] = -1;
	for (int i = 0; i < mycount; i++)
	{
		select_dist[0] = i;
		calc_dist_aux(mycount - 1, dist(po[0], pos[i]), po);
	}
}
void recur_aux(int count_aux, vector<int>& po)
{
	if (count_aux == 0)
	{
		calc_dist(po);
		return;
	}
	for (int k=0; k<mycount-count_aux; k++)
	{
		int candi[4] = { po[k] - 5, po[k] + 5, po[k] - 1, po[k] + 1 };
		for (int j = 0; j < 4; j++)
		{
			if (candi[j] < 0 || candi[j] >= 25 || (((po[k] % 5) == 0) && ((candi[j] % 5) == 4)) || (((po[k] % 5) == 4) && ((candi[j] % 5) == 0)))
				continue;
			if (!select_pos[candi[j] / 5][candi[j] % 5])
			{
				select_pos[candi[j] / 5][candi[j] % 5] = true;
				po[mycount - count_aux] = candi[j];
				recur_aux(count_aux - 1, po);
				select_pos[candi[j] / 5][candi[j] % 5] = false;
				po[mycount - count_aux] = -100;
			}
		}
	}
}

void recur()
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 5; j++)
			for (int k = 0; k < 5; k++)
				select_pos[j][k] = false;

		vector<int> po;
		po.push_back(-100); po.push_back(-100); po.push_back(-100); po.push_back(-100); po.push_back(-100);
		po[0] = i;
		select_pos[i / 5][i % 5] = true;
		recur_aux(mycount -1, po);
		select_pos[i / 5][i % 5] = false;
	}
}
int main()
{
	char c;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> c;
			if (c == '*')
			{
				pos.push_back(5 * i + j);
				mycount++;
			}
		}
	}
	recur();
	cout << ans;
	return 0;
}*/