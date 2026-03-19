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

    int N, M; in N >> M;
    vector<int> A(N), B(M);
    Fori(N) in A[i];
    Fori(M) in B[i];

    int i = 0, j = 0;
    while (i < N || j < M) {
        if (i == N) out B[j++] endl;
        else if (j == M) out A[i++] endl;
        else if (A[i] <= B[j]) out A[i++] endl;
        else out B[j++] endl;
    }

    return 0;
}