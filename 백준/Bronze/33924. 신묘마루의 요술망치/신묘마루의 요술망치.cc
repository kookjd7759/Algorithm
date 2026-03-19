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

    int N, M, K; in N >> M;
    in K;
    string S; in S;

    int p = (N - 1) * 2 + M;
    vector<int> A = {0, 5, 6, 7, 8, 1, 2, 3, 4};
    vector<int> B = {0, 4, 3, 2, 1, 8, 7, 6, 5};
    vector<int> C = {0, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> D = {0, 2, 4, 1, 6, 3, 8, 5, 7};

    for (char c : S) {
        if (c == 'A') p = A[p];
        else if (c == 'B') p = B[p];
        else if (c == 'C') p = C[p];
        else p = D[p];
    }

    out (p + 1) / 2 spc (p % 2 ? 1 : 2) endl;
    return 0;
}