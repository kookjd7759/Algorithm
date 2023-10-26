#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >> 
#define out cout << 
#define spc << " " << 
#define ent << "\n"

using namespace std;

int main() {
	Sync;

	int n; in n; n;
	int ret(1), prev(1);
	while (n--) {
		prev += 3;
		ret += prev;
		ret %= 45678;
	}
	cout << ret;
}