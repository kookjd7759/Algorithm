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

    int list[101]; Fori(101) list[i] = i;
    Testcase{
    string st; in st;
    int n; in n;

    if (st == "ADD") {
        For1i(100) {
            if (list[i] != -1) {
                list[i] += n;
            }
        }
    }
    else if (st == "SUBTRACT") {
        For1i(100) {
            if (list[i] != -1) {
                list[i] -= n;
                if (list[i] < 0) list[i] = -1;
            }
        }
    }
    else if (st == "MULTIPLY") {
        For1i(100) {
            if (list[i] != -1) {
                list[i] *= n;
            }
        }
    }
    else if (st == "DIVIDE") {
        For1i(100) {
            if (list[i] != -1) {
                if (list[i] % n == 0) list[i] /= n;
                else list[i] = -1;
            }
        }
    }
    };

    int cnt(0);
    For1i(100) {
        if (list[i] == -1) cnt++;
    }
    out cnt;
}