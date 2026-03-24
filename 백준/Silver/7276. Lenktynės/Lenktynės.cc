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

    int N; in N;
    vector<int> ord(N), pos(N + 1);
    Fori(N) in ord[i], pos[ord[i]] = i;

    int L; in L;
    For1i(L) {
        int a, b; in a >> b;
        if (pos[a] != pos[b] + 1) {
            out "NE" endl;
            out i endl;
            return 0;
        }
        int pa = pos[a], pb = pos[b];
        swap(ord[pa], ord[pb]);
        swap(pos[a], pos[b]);
    }

    out "TAIP" endl;
    Fori(N) out ord[i] << (i + 1 == N ? '\n' : ' ');

    return 0;
}