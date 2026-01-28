#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    long long b0, b1, s0, s1, g0, g1, p0, p1;
    cin >> b0 >> b1;
    cin >> s0 >> s1;
    cin >> g0 >> g1;
    cin >> p0 >> p1;

    long long gp = p1 - p0;
    long long sg = g1 - g0 + gp;
    long long bs = s1 - s0 + sg;

    cout << bs << "\n" << sg << "\n" << gp;
    return 0;
}
