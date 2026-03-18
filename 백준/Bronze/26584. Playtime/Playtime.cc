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

    int T; in T;
    cin.ignore();

    while (T--) {
        string line; getline(cin, line);
        int pos = line.rfind(',');
        string name = line.substr(0, pos);
        ll m = stoll(line.substr(pos + 1));

        ll year = m / (365LL * 24 * 60);
        m %= (365LL * 24 * 60);
        ll day = m / (24 * 60);
        m %= (24 * 60);
        ll hour = m / 60;
        ll minute = m % 60;

        out name << " - ";
        if (year) out year << " year(s) ";
        if (day) out day << " day(s) ";
        if (hour) out hour << " hour(s) ";
        if (minute) out minute << " minute(s)";
        else if (!year && !day && !hour) out "0 minute(s)";

        ent;
    }

    return 0;
}