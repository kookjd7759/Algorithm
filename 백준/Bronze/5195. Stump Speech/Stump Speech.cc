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

    int K; in K;
    string tmp; getline(cin, tmp);

    For1i(K) {
        int n; in n;
        getline(cin, tmp);

        vector<string> key(n);
        vector<ll> val(n);
        Forj(n) {
            getline(cin, key[j]);
            in val[j];
            getline(cin, tmp);
        }

        string s; getline(cin, s);
        ll ans = 0;

        Forj(n) {
            size_t pos = 0;
            while (1) {
                pos = s.find(key[j], pos);
                if (pos == string::npos) break;
                ans += val[j];
                ++pos;
            }
        }

        out "Data Set " << i << ":" << "\n";
        out ans << "\n";
    }

    return 0;
}