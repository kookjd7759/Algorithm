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
    vector<int> A(N); Fori(N) in A[i];
    int U, D; in U >> D;
    string ans(N, '?');
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    Fori(N) { if (A[i] == 1) cnt1++; else if (A[i] == 2) cnt2++; else cnt3++; }
    if (U < cnt1 || D < cnt2) { out "NO" endl; return 0; }
    int remU = U - cnt1, remD = D - cnt2;
    if (remU + remD != cnt3) { out "NO" endl; return 0; }
    Fori(N) if (A[i] == 1) ans[i] = 'U';
    Fori(N) if (A[i] == 2) ans[i] = 'D';
    Fori(N) if (A[i] == 3) { if (remU > 0) ans[i] = 'U', remU--; else ans[i] = 'D', remD--; }
    out "YES" endl;
    out ans endl;
    return 0;
}