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

bool Valid(string s) {
    if ((int)s.size() != 9) return false;
    Fori(9) if (!isdigit(s[i])) return false;

    int d = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[2] - '0') * 10 + (s[3] - '0');
    int yy = (s[4] - '0') * 100 + (s[5] - '0') * 10 + (s[6] - '0');
    int a = s[7] - '0';
    int c = s[8] - '0';

    int y = (yy <= 599 ? 2000 + yy : 1000 + yy);
    if (!(a == 1 || a == 6 || a == 9)) return false;
    if (m < 1 || m > 12) return false;

    int md[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (Leap(y)) md[2] = 29;
    if (d < 1 || d > md[m]) return false;

    int sum = 0;
    Fori(8) {
        int x = s[i] - '0';
        sum += x * x;
    }
    return sum % 7 == c;
}

int main() {
    Sync;

    Fori(3) {
        string s; in s;
        out (Valid(s) ? 1 : 0) << "\n";
    }

    return 0;
}