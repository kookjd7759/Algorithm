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

struct Grid {
    int arr[4];
    Grid() { Fori(4) arr[i] = i + 1; }

    void H() {
        swap(arr[0], arr[2]);
        swap(arr[1], arr[3]);
    }
    void V() {
        swap(arr[0], arr[1]);
        swap(arr[2], arr[3]);
    }
    void print() {
        out arr[0] spc arr[1] endl;
        out arr[2] spc arr[3];
    }
};

int main() {
    Sync;

    Grid grid;
    string st; in st;
    for (const char& c : st)
        if (c == 'H') grid.H();
        else grid.V();
    grid.print();
}