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
        int n, m; in n >> m;
        int* arr = new int[m];
        Fori(m) {
            int p, c, u, r; in p >> c >> u >> r;
            int profit = r - c;
            if (profit <= 0) arr[i] = -1;
            else {
                int cnt = p / profit + 1;
                if (cnt > u) arr[i] = -1;
                else arr[i] = cnt;
            }
        }

        int* sum = new int[m];
        fill_n(sum, m, 0);
        Fori(n) {
            int a; in a;
            sum[a - 1]++;
        }

        out "Data Set " << k << ":\n";
        Fori(m) {
            if (arr[i] == -1) continue;
            if (arr[i] <= sum[i]) out i + 1 endl;
        }
        ent;
    }
}