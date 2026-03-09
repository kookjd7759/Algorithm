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

    int K; in K;
    For1i(K){
        int B, D; in B >> D;
        vector<double> val(B + D + 1), p(B + D + 1);

        for(int j = 1; j <= B; j++) in val[j];

        for(int d = 1; d <= D; d++){
            int idx = B + d;
            double cur = 0;
            for(int j = 1; j < idx; j++){
                in p[j];
                cur += p[j] * val[j];
            }
            val[idx] = cur;
        }

        double ans = 0;
        for(int j = 1; j <= B + D; j++){
            in p[j];
            ans += p[j] * val[j];
        }

        out "Data Set " << i << ":" << "\n";
        Fixed(2); out ans << "\n\n";
    }

    return 0;
}