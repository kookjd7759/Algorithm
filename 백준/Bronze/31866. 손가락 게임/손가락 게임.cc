#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

enum Game {
    R, S, P, N
};

static Game get() {
    int n; in n;
    return n == 0 ? R
        : n == 2 ? S
        : n == 5 ? P
        : N;
}

int main() {
    Sync;

    Game a(get()), b(get());
    if (a == b) out "=";
    else if (a == N) out "<";
    else if (b == N) out ">";
    else if (a == R) out (b == S ? ">" : "<");
    else if (a == S) out (b == P ? ">" : "<");
    else if (a == P) out(b == R ? ">" : "<");
}