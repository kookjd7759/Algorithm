#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
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
    Fixed(6);
    
    map<int, double> m;
    m.insert({ 0, 2.0 });
    m.insert({ 1, 1.0 });
    m.insert({ 2, 0.5 });
    m.insert({ 4, 0.25 });
    m.insert({ 8, 0.125 });
    m.insert({ 16, 0.0625 });

    int n; in n;
    double ret(0.0);
    Fori(n) {
        int a; in a;
        ret += m[a];
    }
    out ret;
}