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
    map<string, double> m = {
        {"A+",4.3},{"A0",4.0},{"A-",3.7},
        {"B+",3.3},{"B0",3.0},{"B-",2.7},
        {"C+",2.3},{"C0",2.0},{"C-",1.7},
        {"D+",1.3},{"D0",1.0},{"D-",0.7},
        {"F",0.0}
    };
    double num = 0, den = 0;
    Fori(N) {
        string name, grade; int cred;
        in name >> cred >> grade;
        num += cred * m[grade];
        den += cred;
    }
    Fixed(2);
    out round((num / den) * 100) / 100 endl;
}
