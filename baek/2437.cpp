/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<long long> temp;
	vector<long long> arr;
	int N;
	long long t;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> t;
		temp.push_back(t);
	}
	for (int i = 0; i < N; i++)
	{
		int len = arr.size();
		for (int j = 0; j < len; j++)
			arr.push_back(arr[j] + temp[i]);
		arr.push_back(temp[i]);
	}
	sort(arr.begin(), arr.end());
	long long end = arr[arr.size() - 1];
	arr.push_back(-1);
	int ind = 0;
	for (int i = 1; i < end; i++)
	{
		if (arr[ind] != i)
		{
			cout << i;
			return 0;
		}
		while (arr[ind] == i)
			ind++;
	}
	cout << end + 1;
	return 0;
}
*/