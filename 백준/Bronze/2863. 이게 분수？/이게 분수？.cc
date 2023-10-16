#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	double arr[2][2];
	for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) 
		cin >> arr[i][j];

	double max_(0);
	int ret(0);
	for (int i = 0; i < 4; i++) {
		double score = arr[0][0] / arr[1][0] + arr[0][1] / arr[1][1];
		if (max_ < score) {
			ret = i;
			max_ = score;
		}
		int temp = arr[0][0];
		arr[0][0] = arr[1][0];
		arr[1][0] = arr[1][1];
		arr[1][1] = arr[0][1];
		arr[0][1] = temp;
	}
	cout << ret;
}