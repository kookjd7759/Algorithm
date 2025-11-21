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

    int T, N;
    in T >> N;

    Fori(T) {
        string s;
        in s;

        int freq[26] = {0};
        Forj(N) ++freq[s[j] - 'a'];

        bool heavy[1005];
        Forj(N) heavy[j] = (freq[s[j] - 'a'] > 1);

        bool ok = true;
        for (int j = 1; j < N; ++j) {
            if (heavy[j] == heavy[j - 1]) {
                ok = false;
                break;
            }
        }

        if (ok) out 'T' endl;
        else out 'F' endl;
    }

    return 0;
}
