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

    int N, M, Q; in N >> M >> Q;
    vector<string> s(N);
    Fori(N) in s[i];

    vector<int> ok(N, 1);
    Fori(Q) {
        int A; char c; in A >> c;
        --A;
        Forj(N) if(ok[j] && s[j][A] != c) ok[j] = 0;
    }

    int cnt = 0, idx = -1;
    Fori(N) if(ok[i]) ++cnt, idx = i + 1;

    if(cnt == 1) {
        out "unique" endl;
        out idx endl;
    } else {
        out "ambiguous" endl;
        out cnt endl;
    }

    return 0;
}