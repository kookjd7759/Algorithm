#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
#define Interactive cin.tie(0)->sync_with_stdio(0);
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

int visited[1001][1001];
int main() {
	Sync;

    int n, maxi(-1), ret(-1); cin >> n;
    For1i(n) {
        int a, b, c; in a >> b >> c;
        maxi = max(maxi, b);
        for (int j = a; j <= b; j++) visited[i][j] = c;
    }
    For1i(maxi) {
        int a = 0;
        For1j(n) a += visited[j][i];
        ret = max(ret, a);
    }
    out ret;
}