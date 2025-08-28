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

int arr[301][301];

void odd(int n) {
    memset(arr, 0, sizeof(arr));

    int i = 0, j = n / 2;
    for (int num = 1; num <= n * n; ++num) {
        arr[i][j] = num;
        int ni = (i - 1 + n) % n;
        int nj = (j + 1) % n;
        if (arr[ni][nj] != 0) i = (i + 1) % n;
        else { i = ni; j = nj; }
    }
}

void even_4n(int n) {
    int v = 1;
    Fori(n) Forj(n) { arr[i][j] = v++; }

    Fori(n) Forj(n) {
        bool corner = ((i % 4 == 0) || (i % 4 == 3)) && ((j % 4 == 0) || (j % 4 == 3));
        bool center = ((i % 4 == 1) || (i % 4 == 2)) && ((j % 4 == 1) || (j % 4 == 2));
        if (corner || center) arr[i][j] = n * n + 1 - arr[i][j];
    }
}

void even_4n_2(int n) {
    odd(n / 2);
    int temp[301][301]; memcpy(temp, arr, sizeof(arr));

    int k = n / 2;
    int t = k * k;

    Fori(k) Forj(k) {
        arr[i][j] = temp[i][j];
        arr[i][j + k] = temp[i][j] + 2 * t;
        arr[i + k][j] = temp[i][j] + 3 * t;
        arr[i + k][j + k] = temp[i][j] + t;
    }

    int p = (k - 1) / 2;

    Forj(p) Fori(k) swap(arr[i][j], arr[i + k][j]);

    for (int j = k - (p - 1); j < k; ++j) {
        if (p - 1 <= 0) break;
        Fori(k) swap(arr[i][j + k], arr[i + k][j + k]);
    }

    int midRow = p;
    swap(arr[midRow][0], arr[midRow + k][0]);
    swap(arr[midRow][p], arr[midRow + k][p]);
}

int main() {
    Sync;

    int N; in N;
    if (N % 2 == 1) odd(N);
    else if (N % 4 == 0) even_4n(N);
    else even_4n_2(N);

    Fori(N) {
        Forj(N) out arr[i][j] << ' ';
        ent;
    }
}