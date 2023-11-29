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

    int n, m; in n >> m;
    vector<pair<int, int>> vec(m, {0, 0});
    Fori(m) vec[i].second = i + 1;
    Fori(n) Forj(m) {
        int a; in a;
        vec[j].first += a;
    }
    sort(vec.begin(), vec.end(), [&](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first)
            return a.second < b.second;
        else return a.first > b.first;
        });

    Fori(m) out vec[i].second << " ";
}