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

    int N; string S; in N >> S;
    vector<int> seen(26, 0);
    string t = ""; int drop = 0;
    Fori((int)S.size()) {
        int c = S[i] - 'a';
        if (!seen[c]) { seen[c] = 1; t.push_back(S[i]); }
        else drop++;
    }
    t += to_string(drop + 4);
    t = to_string(N + 1906) + t;
    reverse(t.begin(), t.end());
    out "smupc_" << t endl;

    return 0;
}
