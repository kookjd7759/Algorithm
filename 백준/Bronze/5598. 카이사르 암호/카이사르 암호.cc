#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;

	char c;
	while (cin >> c) {
		int conv = c - 65 - 3;
		if (conv < 0) conv = 26 + conv;
		cout << (char)(conv + 65);
	}
}