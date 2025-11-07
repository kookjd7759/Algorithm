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

    string line;
    while (getline(cin, line)) {
        if (line == "-1") break;
        stringstream ss(line);
        vector<int> v; int x;
        while (ss >> x) { if (x==0) break; v.push_back(x); }
        if (v.empty()) continue;
        unordered_set<int> s(v.begin(), v.end());
        int cnt=0;
        for (int a: v) if (s.count(a*2)) ++cnt;
        out cnt endl;
    }
}
