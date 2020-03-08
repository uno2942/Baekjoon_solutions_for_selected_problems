/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> arr(N);
	vector<int> target(N);
	int pivot = 0;
	int left = N;
	int sum = 0;
	int temp = 0;
	for (int i = 0; i < M; i++)
		cin >> target[i];
	for (int i = 0; i < N; i++)
	{
		arr[i] = i+1;
	}
	for (int i = 0; i < M; i++)
	{
		while (target[i] != arr[pivot])
		{
			if (arr[pivot] != -1)
				temp++;
			pivot++;
			pivot %= N;
		}
		arr[pivot] = -1;
		sum += min(temp, left - temp);
		left--;
		while (left!=0 && arr[pivot] == -1)
		{
			pivot++;
			pivot %= N;
		}
		temp = 0;
	}
	cout << sum;
	return 0;
}
*/