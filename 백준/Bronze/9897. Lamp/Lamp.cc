#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int l, n, m; in l >> n >> m;
    bool* lamp = new bool[l + 1]; 
    Fori(l + 1) lamp[i] = false;

    map<string, pair<int, int>> list;
    Fori(n) {
        string name; 
        int a, d;
        in name >> a >> d;
        list.insert({ name, {a, d} });
    }

    Fori(m) {
        string name; in name;
        int a = list[name].first;
        int d = list[name].second;
        int idx = a;
        while (idx < l + 1) {
            lamp[idx] = !lamp[idx];
            idx += d;
        }
    }

    int cnt(0);
    Fori(l + 1) if (lamp[i]) cnt++;
    out cnt;
}