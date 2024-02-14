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

int arr[1001][1001];

int main() {
    Sync;
    
    set<int> loser_set;
    int n, m; in n >> m;
    Fori(n) Forj(m) in arr[i][j];

    int rank(1), same(n);
    Fori(m) {
        bool isFirst = true;
        int loser(0);
        For1j(n - 1) {
            if (arr[0][i] < arr[j][i]) {
                isFirst = false;
                break;
            }
            else if (arr[0][i] > arr[j][i] && loser_set.count(j) == 0) {
                loser++;
                loser_set.insert(j);
            }
        }

        if (isFirst) same -= loser;
    }
    out rank spc same;
}