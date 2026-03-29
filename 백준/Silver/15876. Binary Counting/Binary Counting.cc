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

string bin(int x) {
    if (!x) return "0";
    string s;
    while (x) s.push_back(char('0' + (x & 1))), x >>= 1;
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    Sync;
    int n, k; in n >> k;
    vector<char> ans;
    ll pos = 0;
    for (int x = 0; ans.size() < 5; ++x) {
        string s = bin(x);
        for (char c : s) {
            ++pos;
            if ((pos - 1) % n + 1 == k) ans.push_back(c);
            if (ans.size() == 5) break;
        }
    }
    Fori(5) out ans[i] << (i == 4 ? "" : " ");
    return 0;
}