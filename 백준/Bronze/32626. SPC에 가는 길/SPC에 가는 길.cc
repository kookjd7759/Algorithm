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

struct pos { int x; int y; };

int main() {
    Sync;

    pos H, A, B;
    in H.x >> H.y;
    in A.x >> A.y;
    in B.x >> B.y;

    if (H.x == A.x) {
        if (H.x == B.x && ((H.y < B.y && B.y < A.y) || (A.y < B.y && B.y < H.y)))
            out 2;
        else out 0;
    }
    else if (H.y == A.y) {
        if (H.y == B.y && ((H.x < B.x && B.x < A.x) || (A.x < B.x && B.x < H.x)))
            out 2;
        else out 0;
    }
    else out 1;
}