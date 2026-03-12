#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

bool Leap(int y) {
    if (y % 400 == 0) return true;
    if (y % 100 == 0) return false;
    return y % 4 == 0;
}

ll DaysBefore(int y, int m, int d) {
    int md[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    ll ret = 0;
    for (int yr = 1; yr < y; ++yr) ret += 365 + Leap(yr);
    for (int mon = 1; mon < m; ++mon) {
        ret += md[mon];
        if (mon == 2 && Leap(y)) ret++;
    }
    ret += d - 1;
    return ret;
}

int main() {
    Sync;

    int y, m, d; in y >> m >> d;
    vector<string> day = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};

    ll base = DaysBefore(1900, 1, 1);
    ll cur = DaysBefore(y, m, d);
    ll diff = cur - base;

    out day[(diff % 7 + 7) % 7] << "\n";

    return 0;
}