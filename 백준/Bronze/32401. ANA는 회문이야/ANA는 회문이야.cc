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

bool check(string st) {
    if (st.size() < 3) return false;
    if (st[0] != 'A' || st[st.size() - 1] != 'A') return false;
    bool cntN(false);
    Fori(st.size()) {
        if (st[i] == 'N') {
            if (cntN) return false;
            cntN = true;
        }
    }
    return cntN;
}

int main() {
    Sync;

    int n, cnt(0); in n;
    string st; in st;
    vector<int> Apos;
    Fori(st.size()) if (st[i] == 'A') Apos.push_back(i);
    if (!Apos.empty()) Fori(Apos.size() - 1) 
        if (check(st.substr(Apos[i], Apos[i + 1] - Apos[i] + 1))) ++cnt;
    out cnt;
}