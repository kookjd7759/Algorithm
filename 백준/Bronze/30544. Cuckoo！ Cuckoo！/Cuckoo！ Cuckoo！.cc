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

    string t; in t;
    int h = stoi(t.substr(0, 2));
    int m = stoi(t.substr(3, 2));
    int n; in n;
    while (true) {
        if (m == 0) n -= h;
        else if (m == 15 || m == 30 || m == 45) n--;

        m++;
        if (m == 60) {
            h++;
            m = 0;
        }
        if (h == 13) h = 1;

        if (n <= 0) break;
    }
    if (h < 10) out 0;
    out h << ":";
    if (m < 10) out 0;
    out --m;
}