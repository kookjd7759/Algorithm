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
    
    int N; in N; cin.ignore();
    while (N--) {
        int arr1[5], arr2[5]; 
        memset(arr1, 0, sizeof(arr1));
        memset(arr2, 0, sizeof(arr2));

        int cnt1; in cnt1;
        Fori(cnt1) { int a; in a; arr1[a]++; }
        int cnt2; in cnt2;
        Fori(cnt2) { int a; in a; arr2[a]++; }

        bool isD(true);
        for (int i = 4; i > 0; i--) {
            if (arr1[i] != arr2[i]) {
                out(arr1[i] > arr2[i] ? 'A' : 'B')endl;
                isD = false;
                break;
            }
        }
        if (isD) out "D\n";
    }
}