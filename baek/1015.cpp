/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int temp1, temp2;
vector<int> arr;
vector<int> ans;
int* mytemp;
int* anstemp;
void merge_aux(int* arr, int beg, int mid, int end)
{
	int i = beg;
	int beg0 = beg;
	int mid0 = mid;
	while (beg < mid0 && mid <= end)
	{
		if (arr[beg] > arr[mid])
		{
			mytemp[i] = arr[beg];
			anstemp[i] = ans[beg];
			beg++;
		}
		else if (arr[beg] < arr[mid])
		{
			mytemp[i] = arr[mid];
			anstemp[i] = ans[mid];
			mid++;
		}
		else
		{
			if (ans[beg] > ans[mid])
			{
				mytemp[i] = arr[beg];
				anstemp[i] = ans[beg];
				beg++;
			}
			else
			{
				mytemp[i] = arr[mid];
				anstemp[i] = ans[mid];
				mid++;
			}
		}
		i++;
	}
	if (beg == mid0)
	{
		while (mid <= end)
		{
			mytemp[i] = arr[mid];
			anstemp[i] = ans[mid];
			mid++;
			i++;
		}
	}
	else
	{
		while (beg < mid0)
		{
			mytemp[i] = arr[beg];
			anstemp[i] = ans[beg];
			beg++;
			i++;
		}
	}
	for (int j = beg0; j <= end; j++)
	{
		arr[j] = mytemp[j];
		ans[j] = anstemp[j];
	}
}
void mergesort(int* arr, int beg, int end)
{
	if (beg >= end)
		return;
	else if ((beg + 1) == end)
	{	
		if (arr[beg] < arr[end] || (arr[beg] == arr[end] && ans[beg] < ans[end]))
		{
			int t1 = arr[beg];
			int t2 = ans[beg];
			arr[beg] = arr[end];
			arr[end] = t1;
			ans[beg] = ans[end];
			ans[end] = t2;
		}
		return;
	}
	int mid = (beg + end) / 2;
	mergesort(arr, beg, mid);
	mergesort(arr, mid + 1, end);
	merge_aux(arr, beg, mid + 1, end);
}


int main()
{
	cin >> temp1;

	for (int i = 0; i < temp1; i++)
	{
		cin >> temp2;
		arr.push_back(temp2);
		ans.push_back(i);
	}
	mytemp = new int[temp1];
	anstemp = new int[temp1];
	mergesort(&arr[0], 0, arr.size() - 1);
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << ' ';
	}
	delete(mytemp);
	delete(anstemp);
}
*/