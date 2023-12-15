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

	auto getTet = [&](int n) -> int {
		return (n * (n + 1) * (n + 2) / 6);
		};

	while (true) {
		int n; in n;
		if (!n) break;

		int ret(0);
		for (int i = 1; ; i++) {
			if (i * i * i > n) break;
			ret = max(ret, i * i * i);
		}
		for (int i = 1; ; i++) {
			if (getTet(i) > n) break;
			ret = max(ret, getTet(i));
		}

        for (int i = 1; i * i * i <= n; i++) {
            for (int j = 1; getTet(j) <= n; j++) {
                int temp = i * i * i + getTet(j);
                if (temp > n) continue;
                ret = max(ret, temp);
            }
        }

        out ret endl;
	}
}