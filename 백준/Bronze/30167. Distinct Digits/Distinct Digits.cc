#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    auto func = [](int n) -> bool {
        int arr[10]; memset(arr, 0, sizeof arr);
        while (n > 0) {
            arr[n % 10]++;
            n /= 10;
        }
        Fori(10) if (arr[i] > 1) return false;
        return true;
        };
    
    int l, r; in l >> r;
    bool ch = false;
    for (int i = l; i <= r; i++) {
        if (func(i)) {
            ch = true;
            out i;
            break;
        }
    }
    if (!ch) out - 1;
}