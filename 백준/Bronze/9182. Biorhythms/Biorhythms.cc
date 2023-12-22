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
    for (int t = 1; ; t++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a == -1 && b == -1 && c == -1 && d == -1) break;

        for (int i = d + 1; i <= 21252; i++) {
            if (i % 23 == a % 23 && i % 28 == b % 28 && i % 33 == c % 33) {
                cout << "Case " << t << ": the next triple peak occurs in " << i - d << " days.\n";
                break;
            }
        }
    }
}