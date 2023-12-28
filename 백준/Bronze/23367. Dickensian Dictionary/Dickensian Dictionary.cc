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

int main() {
	Sync;

	string left = "qwertasdfgzxcvb", right = "yuiophjklnm";
	auto isLeft = [&](char c) -> bool {
		return !(left.find(c) == string::npos);
		};
	auto isRight = [&](char c) -> bool {
		return !(right.find(c) == string::npos);
		};

	string st; in st;
	bool startLR = (isLeft(st[0]) ? 0 : 1);
	bool ch = true;
	if (!startLR) {
		Fori(st.size()) {
			if (i & 1) {
				if (!isRight(st[i])) {
					ch = false;
					break;
				}
			}
			else {
				if (!isLeft(st[i])) {
					ch = false;
					break;
				}
			}
		}
	}
	else {
		Fori(st.size()) {
			if (i & 1) {
				if (!isLeft(st[i])) {
					ch = false;
					break;
				}
			}
			else {
				if (!isRight(st[i])) {
					ch = false;
					break;
				}
			}
		}
	}
	out(ch ? "yes" : "no");
}