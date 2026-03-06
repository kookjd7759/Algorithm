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
    Fixed(10);

    double A, B, C, D; in A >> B >> C >> D;

    double keep = 60.0 * C;

    double t_room = 78.0 / D;
    double t_heat_room = 78.0 * B / 60.0;
    double reheat;

    if(t_room + t_heat_room <= 60.0) reheat = 78.0 * A;
    else{
        double t_cool = 60.0 / (1.0 + D * B / 60.0);
        double temp = 100.0 - D * t_cool;
        reheat = (100.0 - temp) * A;
    }

    out keep << "\n" << reheat;
    return 0;
}