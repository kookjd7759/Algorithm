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

    auto Rfloor = [&](int n) -> int {
        if (n <= 1) return 0;
        else if (n <= 5) return 1;
        else if (n <= 10) return 2;
        else if (n <= 15) return 3;
        else if (n <= 20) return 4;
        };

    auto Cfloor = [&](int n) -> int {
        if (n <= 1) return 0;
        else if (n <= 7) return 1;
        else if (n <= 14) return 2;
        else if (n <= 20) return 3;
        };

    auto Ifloor = [&](int n) -> int {
        if (n <= 1) return 0;
        else if (n <= 4) return 1;
        else if (n <= 8) return 2;
        else if (n <= 12) return 3;
        else if (n <= 16) return 4;
        else if (n <= 20) return 5;
        };

    string st; in st;
    int n; in n;
    if (st[0] == 'r') {
        out Rfloor(n);
    }
    else if (st[0] == 'c') {
        out Cfloor(n);
    }
    else {
        out Ifloor(n);
    }
}