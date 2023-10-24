#include <iostream>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int main() {
	sync;

	int ret(0);
	for (int i = 1; i <= 8; i++) {
		char c; 
		for (int j = 1; j <= 8; j++) {
			cin >> c;
			if ((i & 1) == (j & 1) && c == 'F') ret++;
		}
	}
	cout << ret;
}