#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;

	int ret(0);
	char c, prev = '-';
	while (cin >> c) {
		if (prev == c) ret += 5;
		else ret += 10;
		prev = c;
	}
	cout << ret;
}