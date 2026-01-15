#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    long double pab, pbc, pcd; cin >> pab >> pbc >> pcd;

    long double pda = (pab * pcd) / pbc;

    cout << fixed << setprecision(10) << (double)pda << "\n";
    return 0;
}
