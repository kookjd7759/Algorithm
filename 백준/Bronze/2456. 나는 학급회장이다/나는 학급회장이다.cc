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
    int sum[4] = { 0 }, c3[4] = { 0 }, c2[4] = { 0 };
    Fori(N) {
        int a, b, c; in a >> b >> c;
        sum[1] += a; sum[2] += b; sum[3] += c;
        if (a == 3) c3[1]++; if (b == 3) c3[2]++; if (c == 3) c3[3]++;
        if (a == 2) c2[1]++; if (b == 2) c2[2]++; if (c == 2) c2[3]++;
    }
    int mx = max({ sum[1],sum[2],sum[3] });
    vector<int> cand; For1i(3) if (sum[i] == mx) cand.push_back(i);
    if (cand.size() == 1) { out cand[0] spc mx endl; return 0; }
    int m3 = -1; for (int x : cand) m3 = max(m3, c3[x]);
    vector<int> cand3; for (int x : cand) if (c3[x] == m3) cand3.push_back(x);
    if (cand3.size() == 1) { out cand3[0] spc mx endl; return 0; }
    int m2 = -1; for (int x : cand3) m2 = max(m2, c2[x]);
    vector<int> cand2; for (int x : cand3) if (c2[x] == m2) cand2.push_back(x);
    if (cand2.size() == 1) { out cand2[0] spc mx endl; }
    else { out 0 spc mx endl; }
}
