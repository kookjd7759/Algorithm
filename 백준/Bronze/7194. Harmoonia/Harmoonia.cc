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

    int N;
    in N;
    if (N == 0) {
        out "POLE" endl;
        return 0;
    }

    int prevA, prevB;
    in prevA >> prevB;
    int prevDiff = (prevA - prevB) % 12;

    vector<int> ans;
    ans.reserve(N);

    for (int i = 2; i <= N; ++i) {
        int A, B;
        in A >> B;
        int diff = (A - B) % 12;
        if (prevDiff == 7 && diff == 7 && A != prevA && B != prevB) {
            ans.push_back(i - 1);
        }
        prevA = A;
        prevB = B;
        prevDiff = diff;
    }

    if (ans.empty()) {
        out "POLE" endl;
    } else {
        for (int x : ans) {
            out x endl;
        }
    }

    return 0;
}
