#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	double w, h, r; cin >> w >> h >> r;
	double a = r * r * 3.14159265358979 / 4;
	cout << w * h - a;

	return 0;
}
