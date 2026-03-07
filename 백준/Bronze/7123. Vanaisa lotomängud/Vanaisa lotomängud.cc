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
    vector<ll> a(n + 1);
    ll sumP = 0, sumV = 0, mxDay = -1;
    int day = 0;

    For1i(n) {
        ll p, v; in p >> v;
        sumP += p; sumV += v;
        a[i] = p - v;
        if(a[i] > mxDay) mxDay = a[i], day = i;
    }

    if(sumV > sumP) out "PLUSSIS" endl;
    else if(sumV < sumP) out "MIINUSES" endl;
    else out "NULLIS" endl;

    out day spc mxDay endl;

    ll cur = a[1], best = a[1];
    int l = 1, bestL = 1, bestR = 1;
    for(int i = 2; i <= n; ++i) {
        if(cur + a[i] < a[i]) cur = a[i], l = i;
        else cur += a[i];
        if(cur > best) best = cur, bestL = l, bestR = i;
    }

    out bestL spc bestR spc best endl;

    return 0;
}