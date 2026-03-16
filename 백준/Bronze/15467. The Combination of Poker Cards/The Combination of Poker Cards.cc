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

    int T; in T;
    while (T--) {
        vector<int> cnt(14), v;
        Fori(6) {
            int x; in x;
            ++cnt[x];
        }
        For1i(13) if (cnt[i]) v.push_back(cnt[i]);
        sort(v.rbegin(), v.rend());

        if (v == vector<int>{1,1,1,1,1,1}) out "single" endl;
        else if (v == vector<int>{2,1,1,1,1}) out "one pair" endl;
        else if (v == vector<int>{2,2,1,1}) out "two pairs" endl;
        else if (v == vector<int>{2,2,2}) out "three pairs" endl;
        else if (v == vector<int>{3,1,1,1}) out "one triple" endl;
        else if (v == vector<int>{3,3}) out "two triples" endl;
        else if (v == vector<int>{4,1,1}) out "tiki" endl;
        else if (v == vector<int>{4,2}) out "tiki pair" endl;
        else out "full house" endl;
    }

    return 0;
}