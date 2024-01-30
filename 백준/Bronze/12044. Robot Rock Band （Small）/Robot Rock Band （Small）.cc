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

    int T; in T;
    For1k(T) {
        int n, m, ret(0); in n >> m;
        vector<vector<unsigned int>> vec(4);
        Fori(4) Forj(n) {
            int a; in a;
            vec[i].emplace_back(a);
        }

        for (auto iter0 : vec[0])
            for (auto iter1 : vec[1])
                for (auto iter2 : vec[2])
                    for (auto iter3 : vec[3])
                        if ((iter0 ^ iter1 ^ iter2 ^ iter3) == m)
                            ret++;

        out "Case #" << k << ": " << ret endl;
    }
}