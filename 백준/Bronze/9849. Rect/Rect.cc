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

    int x1 = INT_MIN;
    int x2 = INT_MAX;
    int y1 = INT_MIN;
    int y2 = INT_MAX;

    Testcase{
    int p[4]; Fori(4) in p[i];

    x1 = max(x1, p[0]);
    x2 = min(x2, p[1]);
    y1 = max(y1, p[2]);
    y2 = min(y2, p[3]);
    };
    out max(x2 - x1, 0) * max(y2 - y1, 0) endl;
}