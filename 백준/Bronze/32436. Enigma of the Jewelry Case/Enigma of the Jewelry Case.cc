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

int N;
int** arr;

void init() {
    in N;
    arr = new int* [N];
    Fori(N) arr[i] = new int[N];
    Fori(N) Forj(N) in arr[i][j];
}

bool check() { return arr[0][0] < arr[0][1] && arr[0][0] < arr[1][0]; }

void rotate() {
    int** temp = new int*[N]; 
    Fori(N) temp[i] = new int[N];
    memcpy(temp, arr, sizeof(arr));

    Fori(N) Forj(N) temp[N - j - 1][i] = arr[i][j];
    Fori(N) Forj(N) arr[i][j] = temp[i][j];
}

int main() {
    Sync;

    init();
    int cnt(0);
    while (!check()) {
        rotate();
        ++cnt;
    }
    out cnt;
}