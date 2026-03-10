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

bool Vowel(char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }

int main() {
    Sync;

    int T; in T;
    For1i(T) {
        string s; int n; in s >> n;
        int len = s.size(), cnt = 0, last = -1;
        ll ans = 0;
        Forj(len) {
            if (Vowel(s[j])) cnt = 0;
            else ++cnt;
            if (cnt >= n) last = j - n + 1;
            if (last != -1) ans += last + 1;
        }
        out "Case #" << i << ": " << ans endl;
    }

    return 0;
}