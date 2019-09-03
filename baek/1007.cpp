/*#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
typedef std::numeric_limits< double > dbl;
using namespace std;

int temp1, temp2;
int x, y;
int tempx, tempy;
double midx, midy;
double tempans;
vector<pair<int, int>> pts;
vector<double> ans;

void rec_ftn(int count, int depth, int x, int y) {
	if (count && depth < temp2) {
		rec_ftn(count - 1, depth + 1, x + (pts[depth].first - midx), y + (pts[depth].second - midy));
		rec_ftn(count, depth + 1, x, y);
	}
	else if (count == 0 && depth <= temp2)
	{
		tempans = min(tempans, sqrt( ((double)x/temp2) * ((double)x / temp2) + ((double)y / temp2) * ((double)y / temp2)));
	}
}

int main() {

	cin >> temp1;

	for (int i = 0; i < temp1; i++) {
		cin >> temp2;
		for (int j = 0; j < temp2; j++) {
			cin >> x >> y;
			pts.push_back({ temp2 * x, temp2 * y });
		}
		for (int j = 0; j < temp2; j++) {
			midx += pts[j].first;
			midy += pts[j].second;
		}
		midx /= temp2;
		midy /= temp2;
		if (temp2 == 0)
		{
			ans.push_back(0);
			pts.clear();
			midx = 0;
			midy = 0;
			continue;
		}
		tempans = 100000000000;
		rec_ftn(temp2/2, 0, 0, 0);
		ans.push_back(tempans);
		pts.clear();
		midx = 0;
		midy = 0;
	}
	cout.precision(12);
	for (int i = 0; i < temp1; i++) {
		cout << fixed<<(ans[i]*2.0)<<endl;
	}
	return 0;
}
*/