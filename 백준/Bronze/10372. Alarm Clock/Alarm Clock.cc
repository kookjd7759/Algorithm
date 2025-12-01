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

    int digit[10];
    digit[0] = 6;
    digit[1] = 2;
    digit[2] = 5;
    digit[3] = 5;
    digit[4] = 4;
    digit[5] = 5;
    digit[6] = 6;
    digit[7] = 3;
    digit[8] = 7;
    digit[9] = 6;

    int n; in n;

    for (int h = 1; h < 24; ++h) {
        for (int m = 0; m < 60; ++m) {
            int sum(0);
            sum += digit[h / 10] + digit[h % 10];
            sum += digit[m / 10] + digit[m % 10];
            if (n == sum) {
                out setw(2) << setfill('0') << h;
                out ':';
                out setw(2) << setfill('0') << m;
                return 0;
            }
        }
    }
    out "Impossible";
}
