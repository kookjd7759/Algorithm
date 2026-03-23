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

struct Node {
    string name;
    int score;
};

int main() {
    Sync;

    int n; in n;
    vector<Node> a(n);
    Fori(n) {
        int R, S, D; in a[i].name >> R >> S >> D;
        a[i].score = 2 * R + 3 * S + D;
    }

    sort(a.begin(), a.end(), [&](const Node &x, const Node &y) {
        if (x.score != y.score) return x.score > y.score;
        return x.name < y.name;
    });

    if (n >= 1) out a[0].name endl;
    if (n >= 2) out a[1].name endl;

    return 0;
}