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

    int B, E; in B >> E;
    vector<int> pb(1, 0), pe(1, 0);

    Fori(B) {
        int d; char c; in d >> c;
        int dir = (c == 'R' ? 1 : -1);
        while (d--) pb.push_back(pb.back() + dir);
    }

    Fori(E) {
        int d; char c; in d >> c;
        int dir = (c == 'R' ? 1 : -1);
        while (d--) pe.push_back(pe.back() + dir);
    }

    int T = max((int)pb.size(), (int)pe.size()) - 1;
    while ((int)pb.size() <= T) pb.push_back(pb.back());
    while ((int)pe.size() <= T) pe.push_back(pe.back());

    int ans = 0;
    For1i(T) if (pb[i] == pe[i] && pb[i - 1] != pe[i - 1]) ans++;

    out ans endl;

    return 0;
}