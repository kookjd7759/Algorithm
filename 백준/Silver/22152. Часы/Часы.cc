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

int bucketPos[60];

bool inSeg(int x, int a, int b) {
    if (a <= b) return a <= x && x <= b;
    return x >= a || x <= b;
}

int main() {
    Sync;

    Fori(60) {
        if (i <= 11) bucketPos[i] = 0;
        else if (i <= 23) bucketPos[i] = 1;
        else if (i <= 35) bucketPos[i] = 2;
        else if (i <= 47) bucketPos[i] = 3;
        else bucketPos[i] = 4;
    }

    int q;
    in q;
    while (q--) {
        int a, b, h, m;
        in a >> b >> h >> m;
        int ans = 0;
        Fori(60) {
            int M = i;
            int bkt = bucketPos[M];
            for (int H = bkt; H < 60; H += 5) {
                if (h != -1) {
                    if (H != h) continue;
                } else {
                    if (inSeg(H, a, b)) continue;
                }
                if (m != -1) {
                    if (M != m) continue;
                } else {
                    if (inSeg(M, a, b)) continue;
                }
                ++ans;
            }
        }
        out ans << "\n";
    }
    return 0;
}
