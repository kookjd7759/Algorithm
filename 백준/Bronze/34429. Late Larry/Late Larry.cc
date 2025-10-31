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

int main() {
    Sync;
    string time, period;
    int h, m, t;
    char colon;
    in h >> colon >> m >> period;
    in t;

    int total = (h % 12) * 60 + m;
    if (period == "PM") total += 12 * 60;
    total -= t;
    while (total < 0) total += 24 * 60;

    string d = (total >= 12 * 60 ? "PM" : "AM");
    int hh = (total / 60) % 12;
    if (hh == 0) hh = 12;
    int mm = total % 60;

    out hh << ":" << setw(2) << setfill('0') << mm << " " << d;
}
