#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> arr;

int find_longest_subarr_inc(int start, int end)
{
	int count = 0;
	vector<int> temp_arr;
	temp_arr.push_back(-1);
	for (int i = start; i < end; i++)
	{
		if (arr[i] >= arr[end])
			continue;
		if (temp_arr.back() < arr[i])
		{
			temp_arr.push_back(arr[i]);
			count++;
		}
		else
		{
			auto it = lower_bound(temp_arr.begin(), temp_arr.end(), arr[i]);
			*it = arr[i];
		}
	}
	return count;
}
int find_longest_subarr_dec(int start, int end)
{
	int count = 0;
	vector<int> temp_arr;
	temp_arr.push_back(-10001);
	for (int i = start; i < end; i++)
	{
		if (arr[i] >= arr[start - 1])
			continue;
		if (temp_arr.back() < -arr[i])
		{
			temp_arr.push_back(-arr[i]);
			count++;
		}
		else
		{
			auto it = lower_bound(temp_arr.begin(), temp_arr.end(), -arr[i]);
			*it = -arr[i];
		}
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int temp_ans = find_longest_subarr_inc(0, i) + find_longest_subarr_dec(i + 1, n) + 1;
		ans = max(ans, temp_ans);
	}
	cout << ans;
	return 0;
}
