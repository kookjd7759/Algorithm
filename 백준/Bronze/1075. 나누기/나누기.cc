#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;

	int n, f; cin >> n >> f;
	int ret = 0; n /= 100; n *= 100;
	while (n % f != 0) {
		ret++; n++;
	}
	if (ret < 10) cout << 0;
	cout << ret;
}