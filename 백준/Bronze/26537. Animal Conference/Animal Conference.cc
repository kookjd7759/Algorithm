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

    Testcase{

    int z, t, mini = 0x3f3f3f3f; in z;
    pair<int, int> a, b;
    vector<pair<int, int>> vec(z);
    Fori(z) in vec[i].first >> vec[i].second;
    sort(vec.begin(), vec.end());
    Fori(z - 1) for (int j = i + 1; j < z; j++) {
        t = (vec[i].first - vec[j].first) * (vec[i].first - vec[j].first)
            + (vec[i].second - vec[j].second) * (vec[i].second - vec[j].second);
        if (t < mini) {
            a = vec[i], b = vec[j];
            mini = t;
        }
    }
    out a.first spc a.second spc b.first spc b.second endl;

    };
}