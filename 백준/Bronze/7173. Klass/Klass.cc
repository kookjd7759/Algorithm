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

int dx[4]{ 0, 0, 1, -1 };
int dy[4]{ 1, -1, 0, 0 };

int main() {
    Sync;
    Fixed(4);

    int n, m; in n >> m;
    int** board = new int* [n];
    Fori(n) {
        board[i] = new int[m];
        string line; in line;
        Forj(m) board[i][j] = line[j] - '0';
    }

    double ret(0.0);
    Fori(n) {
        Forj(m) {
            double cnt(0.0), sum(0.0);
            Fork(4) {
                int cx = i + dx[k];
                int cy = j + dy[k];
                if (cx < 0 || cx >= n || cy < 0 || cy >= m) continue;
                cnt++;
                sum += abs(board[i][j] - board[cx][cy]);
            }
            ret += sum / cnt;
        }
    }
    out ret;
}