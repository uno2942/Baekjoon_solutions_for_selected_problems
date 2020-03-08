/*#include <iostream>
#include <algorithm>
using namespace std;

bool map[10][10];


enum direction {LEFT, RIGHT, UP, DOWN};
int gx, gy;
bool ans = false;
int ansdepth = 100;

void find_answer(int Rx, int Ry, int Bx, int By, int depth, enum direction dir)
{
	bool fail = false;
	bool ans = false;
	if (depth == 10)
		return;
	switch (dir)
	{
	case LEFT: 
		if (Rx <= Bx)
		{
			while (map[Ry][Rx])
			{
				Rx--;
				if (Ry == gy && Rx == gx)
				{
					ans = true;
					break;
				}
			}
			Rx++;
			while (map[By][Bx] && (ans || By != Ry || Bx != Rx))
			{
				Bx--;
				if (By == gy && Bx == gx)
				{
					return;
				}
			}
			Bx++;
		}
		else
		{
			while (map[By][Bx])
			{
				Bx--;
				if (By == gy && Bx == gx)
				{
					return;
				}
			}
			Bx++;
			while (!fail && map[Ry][Rx] && (By != Ry || Bx != Rx))
			{
				Rx--;
				if (Ry == gy && Rx == gx)
				{
					ans = true;
					break;
				}
			}
			Rx++;
		}
		if (fail)
		{
			return;
		}
		if (ans)
		{
			ansdepth = depth < ansdepth ? depth : ansdepth;
			return;
		}
		depth++;
		find_answer(Rx, Ry, Bx, By, depth, UP);
		find_answer(Rx, Ry, Bx, By, depth, DOWN);
		break;

	case RIGHT:
		if (Bx <= Rx)
		{
			while (map[Ry][Rx])
			{
				Rx++;
				if (Ry == gy && Rx == gx)
				{
					ans = true;
					break;
				}
			}
			Rx--;
			while (map[By][Bx] && (ans || By != Ry || Bx != Rx))
			{
				Bx++;
				if (By == gy && Bx == gx)
				{
					return;
				}
			}
			Bx--;
		}
		else
		{
			while (map[By][Bx])
			{
				Bx++;
				if (By == gy && Bx == gx)
					fail = true;
			}
			Bx--;
			while (!fail && map[Ry][Rx] && (By != Ry || Bx != Rx))
			{
				Rx++;
				if (Ry == gy && Rx == gx)
					ans = true;
			}
			Rx--;
		}
		if (fail)
		{
			return;
		}
		if (ans)
		{
			ansdepth = depth < ansdepth ? depth : ansdepth;
			return;
		}
		depth++;
		find_answer(Rx, Ry, Bx, By, depth, UP);
		find_answer(Rx, Ry, Bx, By, depth, DOWN);
		break;
	case UP:
		if (By <= Ry)
		{
			while (map[Ry][Rx])
			{
				Ry++;
				if (Rx == gx && Ry == gy)
				{
					ans = true;
					break;
				}
			}
			Ry--;
			while (map[By][Bx] && (ans || By != Ry || Bx != Rx))
			{
				By++;
				if (Bx == gx && By == gy)
				{
					return;
				}
			}
			By--;
		}
		else
		{
			while (map[By][Bx])
			{
				By++;
				if (Bx == gx && By == gy)
				{
					return;
				}
			}
			By--;
			while (!fail && map[Ry][Rx] && (By != Ry || Bx != Rx))
			{
				Ry++;
				if (Rx == gx && Ry == gy)
				{
					ans = true;
					break;
				}
			}
			Ry--;
		}
		if (fail)
		{
			ans = false;
			return;
		}
		if (ans)
		{
			ansdepth = depth < ansdepth ? depth : ansdepth;
			return;
		}
		depth++;
		find_answer(Rx, Ry, Bx, By, depth, LEFT);
		find_answer(Rx, Ry, Bx, By, depth, RIGHT);
		break;
	case DOWN:
		if (Ry <= By)
		{
			while (map[Ry][Rx])
			{
				Ry--;
				if (Rx == gx && Ry == gy)
				{
					ans = true;
					break;
				}
			}
			Ry++;
			while (map[By][Bx] && (ans || By != Ry || Bx != Rx))
			{
				By--;
				if (Bx == gx && By == gy)
				{
					return;
				}
			}
			By++;
		}
		else
		{
			while (map[By][Bx])
			{
				By--;
				if (Bx == gx && By == gy)
					return;
			}
			By++;
			while (!fail && map[Ry][Rx] && (By != Ry || Bx != Rx))
			{
				Ry--;
				if (Rx == gx && Ry == gy)
				{
					ans = true;
					break;
				}
			}
			Ry++;
		}
		if (fail)
		{
			ans = false;
			return;
		}
		if (ans)
		{
			ansdepth = depth < ansdepth ? depth : ansdepth;
			return;
		}
		depth++;
		find_answer(Rx, Ry, Bx, By, depth, LEFT);
		find_answer(Rx, Ry, Bx, By, depth, RIGHT);
		break;
	}
}

int main() {
	int h, w;
	int Rx, Ry, Bx, By;
	string line;
	cin >> h >> w;

	for (int i = 0; i < h; i++)
	{
		cin >> line;
		for (int j = 0; j < w; j++)
		{
			switch (line[j])
			{
			case '#': map[i][j] = false; break;
			case '.': map[i][j] = true; break;
			case 'R': map[i][j] = true; Rx = j; Ry = i; break;
			case 'B': map[i][j] = true; Bx = j; By = i; break;
			case 'O': map[i][j] = true; gx = j; gy = i; break;
			}
		}
	}

	find_answer(Rx, Ry, Bx, By, 0, LEFT);
	find_answer(Rx, Ry, Bx, By, 0, RIGHT);
	find_answer(Rx, Ry, Bx, By, 0, UP);
	find_answer(Rx, Ry, Bx, By, 0, DOWN);

	if (ansdepth == 100)
		cout << -1;
	else
	{
		ansdepth++;
		cout << ansdepth;
	}
	return 0;
}
*/