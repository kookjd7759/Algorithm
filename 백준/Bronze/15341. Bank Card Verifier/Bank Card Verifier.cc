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

    string a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        if (a == "0000" && b == "0000" && c == "0000" && d == "0000") break;
        string s = a + b + c + d;
        int sum = 0;
        Fori(16) {
            int x = s[i] - '0';
            if (i % 2 == 0) {
                x *= 2;
                if (x > 9) x -= 9;
            }
            sum += x;
        }
        if (sum % 10 == 0) out "Yes" endl;
        else out "No" endl;
    }

    return 0;
}