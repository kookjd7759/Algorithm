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

    int tc; in tc;
    For1i(tc) {
        int c, l; in c >> l;
        vector<int> vec(l);
        Forj(l) in vec[j];

        int minDiff(2e9), ret1, ret2;
        for (int j = 0; j < l - 1; j++)
            for (int k = j + 1; k < l; k++) {
                int sum = vec[j] + vec[k];
                int diff = c - sum;
                if (diff >= 0 && minDiff > diff) {
                    minDiff = diff;
                    ret1 = j + 1;
                    ret2 = k + 1;
                }
            }
        out "Case #" << i << ": " << ret1 spc ret2 endl;
    }
}