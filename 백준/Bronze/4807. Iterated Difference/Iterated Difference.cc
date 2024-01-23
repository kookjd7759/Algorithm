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

    int tc = 1;
    while (true) {
        int n; in n;
        if (!n) break;

        vector<int> vec(n);
        Fori(n) in vec[i];

        int cnt(1000);
        Fori(1000) {
            if (count(vec.begin(), vec.end(), 0) == n) {
                cnt = max(0, i - 1);
                break;
            }

            vector<int> cache(n);
            Forj(n)
                cache[j] = abs(vec[j] - vec[(j + 1) % n]);

            vec = cache;
        }

        out "Case " << tc << ": ";
        if (cnt == 1000) out "not attained\n";
        else out cnt << " iterations\n";

        tc++;
    }
}