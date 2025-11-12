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

    string N; int m; in N >> m;
    vector<int> K(m); Fori(m) in K[i];
    sort(K.begin(), K.end());
    int L = (int)N.size(), mx = K.back();
    string res; bool done = false, fail_equal = false;

    res.reserve(L);
    Fori(L) {
        int x = N[i] - '0';
        auto it = upper_bound(K.begin(), K.end(), x);
        if (it == K.begin()) {
            int j = i - 1;
            for (; j >= 0; --j) {
                int pj = N[j] - '0';
                auto it2 = upper_bound(K.begin(), K.end(), pj - 1);
                if (it2 != K.begin()) {
                    --it2;
                    res[j] = char('0' + *it2);
                    for (int t = j + 1; t < L; ++t) res.push_back(char('0' + mx));
                    out res endl;
                    return 0;
                }
            }
            fail_equal = true;
            break;
        }
        else {
            --it;
            if (*it == x) {
                res.push_back(char('0' + *it));
                continue;
            }
            else {
                res.push_back(char('0' + *it));
                for (int t = i + 1; t < L; ++t) res.push_back(char('0' + mx));
                out res endl;
                return 0;
            }
        }
    }
    if (!fail_equal) { out res endl; return 0; }
    out string(L - 1, char('0' + mx)) endl;
}
