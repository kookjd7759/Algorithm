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

string low(string s) {
    for (char &c : s) c = tolower((unsigned char)c);
    return s;
}

int main() {
    Sync;
    int n, tc = 1;
    while (in n) {
        if (!n) break;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        vector<pair<string, string>> v(n);
        Fori(n) getline(cin, v[i].second), v[i].first = low(v[i].second);
        stable_sort(v.begin(), v.end(), [](const pair<string, string>& a, const pair<string, string>& b) { return a.first < b.first; });
        out tc endl;
        for (auto &p : v) out p.second endl;
        ++tc;
    }
    return 0;
}