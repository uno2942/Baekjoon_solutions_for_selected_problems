/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int p_arr[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53 };
int temp1;
vector<int> temp_arr;
vector<int> candidate;
vector<int> graph[50];
int ans[50];
void bfs(int target)
{
	for (int i = 1; i < temp1; i++)
	{
		if (i == target)
			continue;
	}
}

void dfs()
{

}



bool is_maximal(int target)
{
	for (int i = 0; i < temp1; i++)
	{
		ans[i] = -1;
	}

	int flow = 0;
	int prev_flow = -1;
	while (prev_flow != flow)
	{
		bfs(target);
	}

}







bool is_prime(int a, int b)
{
	int sum = a + b;
	for (int i = 0; i < 16; i++)
	{
		if (sum % p_arr[i] == 0)
			return false;
	}
	return true;
}

int main()
{
	int temp;
	cin >> temp1;
	for (int i = 0; i < temp1; i++)
	{
		cin >> temp;
		temp_arr.push_back(temp);
	}
	if (temp == 0)
		return 0;

	int temp_arr_size = temp_arr.size();
	for (int i = 1; i < temp_arr_size; i++)
	{
		if (is_prime(temp_arr[0], temp_arr[i]))
			candidate.push_back(i);
	}
	for (int i = 1; i < temp_arr_size; i++)
	{
		for (int j = i + 1; j < temp_arr_size; j++)
		{
			if (is_prime(temp_arr[i], temp_arr[j]))
			{
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
		}
	}

	temp_arr_size = candidate.size();

	for (int i = 0; i < temp_arr_size; i++)
	{
		if (is_maximal(candidate[i]))
			cout << candidate[i] << ' ';
	}
}
*/