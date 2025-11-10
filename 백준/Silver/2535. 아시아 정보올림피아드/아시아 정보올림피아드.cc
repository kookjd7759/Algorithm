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
    struct S{int c,s,sc;};
    vector<S> v(N);
    int maxc=0;
    Fori(N){ in v[i].c >> v[i].s >> v[i].sc; maxc=max(maxc,v[i].c); }
    sort(v.begin(), v.end(), [](const S& a, const S& b){ return a.sc > b.sc; });
    vector<int> cnt(maxc+1,0);
    int picked=0;
    Fori(N){
        if (cnt[v[i].c] < 2){
            out v[i].c spc v[i].s << "\n";
            cnt[v[i].c]++;
            if (++picked==3) break;
        }
    }
    return 0;
}
