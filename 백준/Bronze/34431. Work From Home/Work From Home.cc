#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define out cout <<
#define in cin >>
#define endl << "\n"

using namespace std;

int main() {
    Sync;

    long long W, m, C;
    in W >> m >> C;

    long long num = W * m * C;
    long long den = 1000LL * 60LL * 100LL;

    long long D = (num + den - 1) / den;

    out D endl;

    return 0;
}
