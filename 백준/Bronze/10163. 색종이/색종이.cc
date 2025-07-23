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

int arr[1005][1005]; 

int main() {
    Sync;

    memset(arr, 0, sizeof(arr));
    int N; in N;
    int* score = new int[N]; memset(score, 0, N * sizeof(int));
    
    Fori(N){
        int x, y, w, h; in x >> y >> w >> h;
        Forj(w) Fork(h) arr[x + j][y + k] = i + 1;
    }

    Fori(1005) Forj(1005) if (arr[i][j]) score[arr[i][j] - 1]++;
    
    Fori(N) out score[i] endl;
}