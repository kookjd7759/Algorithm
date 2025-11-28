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

int Mcap, Ncap;
int w[4];
int cntBin[4], sumBin[4];
int limitBins;
bool ok;

void dfs(int idx, int usedBins) {
    if (ok) return;
    if (idx == 4) {
        ok = true;
        return;
    }
    Fori(usedBins) {
        if (cntBin[i] + 1 <= Mcap && sumBin[i] + w[idx] <= Ncap) {
            cntBin[i]++; 
            sumBin[i] += w[idx];
            dfs(idx + 1, usedBins);
            cntBin[i]--; 
            sumBin[i] -= w[idx];
            if (ok) return;
        }
    }
    if (usedBins < limitBins && 1 <= Mcap && w[idx] <= Ncap) {
        cntBin[usedBins] = 1;
        sumBin[usedBins] = w[idx];
        dfs(idx + 1, usedBins + 1);
        cntBin[usedBins] = 0;
        sumBin[usedBins] = 0;
    }
}

int main() {
    Sync;
    in Mcap >> Ncap;
    Fori(4) in w[i];
    sort(w, w + 4, greater<int>());
    int ans = 4;
    For1i(4) {
        limitBins = i;
        ok = false;
        Forj(4) {
            cntBin[j] = 0;
            sumBin[j] = 0;
        }
        dfs(0, 0);
        if (ok) {
            ans = i;
            break;
        }
    }
    out ans;
}
