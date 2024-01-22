#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

struct RGB {
	int r, g, b;
};

double getCal(RGB rgb, RGB rgb2) {
    return sqrt((rgb.r - rgb2.r) * (rgb.r - rgb2.r)
        +(rgb.g - rgb2.g) * (rgb.g - rgb2.g)
        +(rgb.b - rgb2.b) * (rgb.b - rgb2.b));
}

int main() {
	Sync;
	
	int l, h, cnt(0); in l >> h;
	for (int i = l; i <= h; i++) {
		string t = to_string(i);
		bool ch = true;
		Forj(6) {
			if (!ch) break;
			char c = t[j];
			if (c == '0') {
				ch = false;
				break;
			}
			Fork(6) {
				if (k == j) continue;
				if (c == t[k]) {
					ch = false;
					break;
				}
			}
			if (i % (t[j] - '0') != 0)
				ch = false;
		}
		if (ch) cnt++;
	}
	out cnt;
}