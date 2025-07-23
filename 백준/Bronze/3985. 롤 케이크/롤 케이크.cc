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
    
    int L, N; in L >> N;
    bool* arr = new bool[L];
    int* score = new int[N];
    memset(arr, false, L * sizeof(bool));
    memset(score, 0, N * sizeof(int));

    int exp_maxi(0), exp_idx(0);
    Fori(N) {
        int a, b; in a >> b;
        if (exp_maxi < b - a) {
            exp_maxi = b - a;
            exp_idx = i;
        }
        for (int j = a; j <= b; ++j) if (!arr[j]) { arr[j] = true, score[i]++; }
    }

    int real_maxi(arr[0]), real_idx(0);
    Fori(N) {
        if (real_maxi < score[i]) {
            real_maxi = score[i];
            real_idx = i;
        }
    }

    out exp_idx + 1 endl;
    out real_idx + 1 endl;
}