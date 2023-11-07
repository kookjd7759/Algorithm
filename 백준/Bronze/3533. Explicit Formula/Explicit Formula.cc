#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define Roop(x) while(x--) 

using namespace std;

int main() {
    Sync;

    bool n[10]; Fori(10) in n[i];
    bool ret = false;
    Fori(10) for (int j = i + 1; j < 10; j++)
        ret ^= (n[i] || n[j]);

    Fori(10) for (int j = i + 1; j < 10; j++)
        for (int k = j + 1; k < 10; k++)
            ret ^= (n[i] || n[j] || n[k]);

    out ret;
}