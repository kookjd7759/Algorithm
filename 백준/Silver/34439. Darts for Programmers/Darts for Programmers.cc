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

    int order[20] = {20,1,18,4,13,6,10,15,2,17,3,19,7,16,8,11,14,9,12,5};
    int posOf[21];
    Fori(20) posOf[order[i]] = i;
    int pref[21];
    pref[0] = 0;
    Fori(20) pref[i + 1] = pref[i] + order[i];
    int total = pref[20];

    auto sumCW = [&](int a, int b) -> int {
        if (b >= a) return pref[b + 1] - pref[a];
        return total - (pref[a] - pref[b + 1]);
    };

    int N;
    in N;
    Fori(N) {
        int w1, w2, w3;
        in w1 >> w2 >> w3;
        int p[3];
        p[0] = posOf[w1];
        p[1] = posOf[w2];
        p[2] = posOf[w3];
        sort(p, p + 3);
        int s1 = sumCW(p[0], p[1]);
        int s2 = sumCW(p[1], p[2]);
        int s3 = sumCW(p[2], p[0]);
        int ans = max(s1, max(s2, s3));
        out ans endl;
    }
    return 0;
}
