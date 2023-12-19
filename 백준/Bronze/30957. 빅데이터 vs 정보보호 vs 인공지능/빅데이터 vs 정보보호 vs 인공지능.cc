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

    int BSA[3]; memset(BSA, 0, sizeof BSA);
    int n, maxi(0); in n;
    Fori(n) {
        char c; in c;
        if (c == 'B') BSA[0]++, maxi = max(maxi, BSA[0]);
        else if (c == 'S') BSA[1]++, maxi = max(maxi, BSA[1]);
        else if (c == 'A') BSA[2]++, maxi = max(maxi, BSA[2]);
    }

    int cnt(0);
    Fori(3) if (maxi == BSA[i]) cnt++;
    if (cnt == 3) out "SCU";
    else Fori(3) if (maxi == BSA[i]) {
        if (i == 0) out 'B';
        else if (i == 1) out 'S';
        else if (i == 2) out 'A';
    }
}