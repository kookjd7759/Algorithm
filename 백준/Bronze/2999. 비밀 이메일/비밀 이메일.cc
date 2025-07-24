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

    string st; in st;

    int N = st.size();
    int R = 1, C = N;

    For1i(N) if (N % i == 0) {
        int j = N / i;
        if (i <= j) R = i, C = j;
    }

    vector<vector<char>> mat(R, vector<char>(C));
    int idx = 0;

    Fori(C) Forj(R) mat[j][i] = st[idx++];
    Fori(R) Forj(C) cout << mat[i][j];
}