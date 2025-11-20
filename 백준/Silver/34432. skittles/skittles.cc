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

    string s;
    if (!(in s)) return 0;
    ll cnt[5] = { 0, 0, 0, 0, 0 };
    for (char c : s) {
        if (c == 'R') cnt[0]++;
        else if (c == 'O') cnt[1]++;
        else if (c == 'Y') cnt[2]++;
        else if (c == 'G') cnt[3]++;
        else if (c == 'P') cnt[4]++;
    }
    char color[5] = { 'R','O','Y','G','P' };
    ll batches5 = cnt[0];
    for (int i = 1; i < 5; ++i) batches5 = min(batches5, cnt[i]);
    if (batches5 > 0) {
        for (int i = 0; i < 5; ++i) cnt[i] -= batches5;
        out batches5 << " ROYGP\n";
    }
    else {
        out 0 << "\n";
    }
    for (int k = 4; k >= 1; --k) {
        int bestMask = 0;
        ll bestNum = 0;
        string bestStr = "";
        for (int mask = 1; mask < (1 << 5); ++mask) {
            if (__builtin_popcount(mask) != k) continue;
            ll mn = LLONG_MAX;
            for (int i = 0; i < 5; ++i) if (mask & (1 << i)) mn = min(mn, cnt[i]);
            if (mn == 0) continue;
            string curStr;
            for (int i = 0; i < 5; ++i) if (mask & (1 << i)) curStr.push_back(color[i]);
            if (mn > bestNum || (mn == bestNum && (bestStr.empty() || curStr < bestStr))) {
                bestNum = mn;
                bestMask = mask;
                bestStr = curStr;
            }
        }
        if (bestNum == 0) out 0 << "\n";
        else {
            for (int i = 0; i < 5; ++i) if (bestMask & (1 << i)) cnt[i] -= bestNum;
            out bestNum;
            if (!bestStr.empty()) out " " << bestStr;
            ent;
        }
    }
    return 0;
}
