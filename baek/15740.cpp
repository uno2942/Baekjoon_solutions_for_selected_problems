#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	bool a_minus = false;
	bool b_minus = false;
	bool rev = false;
	string a_o, b_o;
	cin >> a_o >> b_o;
	cout << atoll(a_o.c_str()) + atoll(b_o.c_str());
	return 0;
}