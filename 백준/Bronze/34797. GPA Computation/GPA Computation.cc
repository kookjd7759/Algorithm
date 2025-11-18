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
    Fixed(10);

    int n;
    in n;

    double sum = 0.0;
    double bonus = 0.0;

    Fori(n) {
        string s;
        in s;
        char g = s[0];
        char t = s[1];

        // grade points
        if (g == 'A') sum += 4;
        else if (g == 'B') sum += 3;
        else if (g == 'C') sum += 2;
        else if (g == 'D') sum += 1;
        else sum += 0;

        // bonus
        if (g == 'A' || g == 'B' || g == 'C') {
            if (t == '1') bonus += 0.05;
            else if (t == '2') bonus += 0.025;
        }
    }

    double gpa = sum / n + bonus;
    out gpa;

    return 0;
}
