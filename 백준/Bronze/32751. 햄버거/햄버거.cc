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

    int n; in n;
    int have[4]; Fori(4) in have[i];
    int use[4]; memset(use, 0, sizeof(use));
    string st; in st;
    bool flag(true);
    
    if (st[0] != 'a' || st[st.size() - 1] != 'a') flag = false;

    Fori(n - 1) if (st[i] == st[i + 1]) flag = false;

    Fori(st.size()) ++use[st[i] - 'a'];
    Fori(4) if (use[i] > have[i]) flag = false;

    out (flag ? "Yes" : "No");
}