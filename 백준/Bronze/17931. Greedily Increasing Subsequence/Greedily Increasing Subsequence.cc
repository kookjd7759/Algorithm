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
    vector<int> a(N + 1), nxt(N + 1, 0);
    for (int i = 1; i <= N; ++i) in a[i];
    vector<int> st;
    st.reserve(N);
    for (int i = 1; i <= N; ++i) {
        while (!st.empty() && a[st.back()] < a[i]) {
            nxt[st.back()] = i;
            st.pop_back();
        }
        st.push_back(i);
    }
    vector<int> gis;
    gis.reserve(N);
    int idx = 1;
    gis.push_back(a[idx]);
    while (nxt[idx]) {
        idx = nxt[idx];
        gis.push_back(a[idx]);
    }
    out(int)gis.size() << "\n";
    for (int i = 0; i < (int)gis.size(); ++i) {
        if (i) cout << ' ';
        out gis[i];
    }
    ent;
    return 0;
}
