#include <iostream>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"

using namespace std;

int main() {
	Sync;
	int eng[26]; memset(eng, 0, sizeof(eng));

	auto gcd = [&](int x, int y) -> int {
		int r;
		while (y != 0) {
			r = x % y;
			x = y;
			y = r;
		}
		return x;
		};

	int t; in t;
	while (t--) {
		int x, y; in x >> y;
		out (x * y) / gcd(x, y) << " ";
		out gcd(x, y) endl;
	}
}