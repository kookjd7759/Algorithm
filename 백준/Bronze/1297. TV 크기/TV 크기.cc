#include <iostream>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;
int main() {
	Sync;

	double d, h, w; cin >> d >> h >> w;
	double per = d / sqrt((h * h) + (w * w));
	cout << (int)(h * per) << " " << (int)(w * per);
}