/*#include<iostream>
#include<vector>
using namespace std;

int A, B;
int temp1, temp;
vector<int> ans;
int main() {
	cin >> temp1;

	for (int i = 0; i < temp1; i++) {
		cin >> A >> B;
		temp = A % 10;
		switch (temp)
		{
		case 0: ans.push_back(10); break;
		case 1: ans.push_back(1); break;
		case 2: {
			switch (B % 4) {
			case 0: ans.push_back(6); break;
			case 1: ans.push_back(2); break;
			case 2: ans.push_back(4); break;
			case 3: ans.push_back(8); break;
			}
		}
				break;
		case 3: {
			switch (B % 4) {
			case 0: ans.push_back(1); break;
			case 1: ans.push_back(3); break;
			case 2: ans.push_back(9); break;
			case 3: ans.push_back(7); break;
			}
		}
				break;
		case 4: {
			switch (B % 2) {
			case 0: ans.push_back(6); break;
			case 1: ans.push_back(4); break;
			}
		}
				break;
		case 5: ans.push_back(5); break;

		case 6: ans.push_back(6); break;

		case 7: {
			switch (B % 4) {
			case 0: ans.push_back(1); break;
			case 1: ans.push_back(7); break;
			case 2: ans.push_back(9); break;
			case 3: ans.push_back(3); break;
			}
		}
				break;

		case 8: {
			switch (B % 4) {
			case 0: ans.push_back(6); break;
			case 1: ans.push_back(8); break;
			case 2: ans.push_back(4); break;
			case 3: ans.push_back(2); break;
			}
		}
				break;
		case 9: {
			switch (B % 2) {
			case 0: ans.push_back(1); break;
			case 1: ans.push_back(9); break;
			}
		}
				break;
		}
	}
	for (int i = 0; i < temp1; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}*/