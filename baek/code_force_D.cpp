#include<iostream>
#include<algorithm>
#include<bitset>

using namespace std;

int main()
{
	long long N, M;
	cin >> N >> M;
	long long temp = M - N;

	if (temp < 0 || (temp % 2 == 1))
	{
		cout << "-1";
		return 0;
	}
	else if (temp == 0)
	{
		if (N == 0)
			cout << 0;
		else
		{
			cout << 1 << endl;
			cout << N;
		}
		return 0;
	}
	temp /= 2;

	long long temp_origin = temp;
	long long N_origin = N;
	while (temp > 0)
	{
		if (temp % 2 == 1 && N % 2 == 1)
			break;
		temp /= 2;
		N /= 2;
	}
	if (temp == 0)
	{
		cout << 2 << endl;
		cout << N_origin + temp_origin << ' ' << temp_origin;
	}
	else
	{
		cout << 3 << endl;
		cout << N_origin << ' ' << temp_origin << ' ' << temp_origin;
	}


	return 0;
}