#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z, n;
    cin >> x >> y >> z >> n;

    double dz = (double)z / (double)n;

    cout.setf(std::ios::fixed);
    cout << setprecision(8);

    for (int i = 0; i < n; i++) {
        double x1 = 0.0, y1 = 0.0, z1 = dz * i;
        double x2 = (double)x, y2 = (double)y, z2 = dz * (i + 1);

        cout << x1 << ' ' << y1 << ' ' << z1 << ' '
             << x2 << ' ' << y2 << ' ' << z2 << "\n";
    }
    return 0;
}