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
    int n;
    while (cin >> n) {
        if (!n) break;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        vector<string> a(n);
        Fori(n) getline(cin, a[i]);
        int top = (n + 1) / 2, bottom = n - top;
        Fori(bottom) out a[i] endl, out a[top + i] endl;
        if (top > bottom) out a[top - 1] endl;
    }
    return 0;
}