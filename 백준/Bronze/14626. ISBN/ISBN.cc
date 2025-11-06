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

    string s; in s;
    int N = 13;
    vector<int> w(N, 1);
    Fori(12) if (i % 2 == 1) w[i] = 3;

    int star = -1, sum = 0;
    Fori(N) {
        if (s[i] == '*') { star = i; continue; }
        int d = s[i] - '0';
        sum += w[i] * d;
    }

    int need = (10 - (sum % 10)) % 10;
    int ansDigit = 0;
    Fori(10) {
        if ((w[star] * i) % 10 == need) { ansDigit = i; break; }
    }
    out ansDigit endl;
}
