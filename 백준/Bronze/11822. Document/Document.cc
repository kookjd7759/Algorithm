#include <bits/stdc++.h>
#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >>
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)
using namespace std;

int main() {
    Sync;

    int N; in N;
    vector<array<int,7>> ok(N);
    Fori(N){
        ok[i].fill(0);
        int a,b,c,d,e; in a >> b >> c >> d >> e;
        ok[i][0]=a; ok[i][1]=b; ok[i][2]=c; ok[i][3]=d; ok[i][4]=e;
    }

    int day = 1;
    Fori(N){
        while (!ok[i][(day-1)%7]) day++;
        day++;
    }

    out day-1 endl;
    return 0;
}
