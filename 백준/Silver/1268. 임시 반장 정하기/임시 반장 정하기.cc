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

    int n; in n;
    int** students = new int *[n];
    int* friends = new int [n];
    Fori(n) {
        students[i] = new int[5];
        Forj(5) in students[i][j];
    }

    Fori(n) {
        set<int> s;
        Forj(5) {
            int a = students[i][j];
            Fork(n) if (i != k && a == students[k][j]) {
                s.insert(k);
            }
        }
        friends[i] = s.size();
    }

    int maxi(-2e9), idx(-1);
    for (int i = n - 1; i >= 0; --i) {
        if (maxi <= friends[i]) {
            maxi = friends[i];
            idx = i;
        }
    }
    out idx + 1;
}