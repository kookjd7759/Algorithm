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

int dest(int n) {
    if (n == -1) return 19;
    else if (n == 20) return 0;
    else return n;
}

int main() {
    Sync;

    int arr[20], idx20(0);
    double sum(0), around20(0);
    Fori(20) {
        in arr[i];
        sum += (double)arr[i];
        if (arr[i] == 20) idx20 = i;
    }
    around20 = arr[dest(idx20 - 1)] + arr[idx20] + arr[dest(idx20 + 1)];

    double Bob(sum / 20.0);
    double Alice(around20 / 3.0);
    if (Bob > Alice) out "Bob";
    else if (Bob < Alice) out "Alice";
    else out "Tie";
}