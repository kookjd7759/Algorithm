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
    string hill;
    getline(cin, hill);
    string time;
    getline(cin, time);
    string day;
    getline(cin, day);
    int bad, snow, hol;
    cin >> bad >> snow >> hol;
    int h = stoi(time.substr(0, time.find(':')));
    int m = stoi(time.substr(time.find(':') + 1));
    long long minutes = h * 60 + m;
    long long factor = 1;
    if (day == "sat" || day == "sun") factor *= 2;
    if (bad) factor *= 2;
    if (snow) factor *= 3;
    if (hol) factor *= 3;
    minutes *= factor;
    long long rh = minutes / 60;
    long long rm = minutes % 60;
    out rh << ":" << setw(2) << setfill('0') << rm;
}
