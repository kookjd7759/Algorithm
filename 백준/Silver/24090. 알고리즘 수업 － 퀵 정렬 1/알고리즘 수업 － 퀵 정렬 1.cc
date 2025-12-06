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

ll K, cnt = 0;
int ans1 = -1, ans2 = -1;

void do_swap(vector<int>& A, int u, int v) {
    int x = A[u], y = A[v];
    ++cnt;
    if (cnt == K) {
        if (x < y) {
            ans1 = x;
            ans2 = y;
        } else {
            ans1 = y;
            ans2 = x;
        }
    }
    int tmp = A[u];
    A[u] = A[v];
    A[v] = tmp;
}

int partition_quick(vector<int>& A, int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; ++j) {
        if (A[j] <= x) {
            ++i;
            do_swap(A, i, j);
        }
    }
    if (i + 1 != r) do_swap(A, i + 1, r);
    return i + 1;
}

void quick_sort(vector<int>& A, int p, int r) {
    if (p < r) {
        int q = partition_quick(A, p, r);
        quick_sort(A, p, q - 1);
        quick_sort(A, q + 1, r);
    }
}

int main() {
    Sync;

    int N;
    in N >> K;
    vector<int> A(N);
    Fori(N) in A[i];

    quick_sort(A, 0, N - 1);

    if (cnt < K) out -1;
    else out ans1 spc ans2;

    return 0;
}
