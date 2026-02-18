#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double d1, d2, chi;
    cin >> d1 >> d2 >> chi;

    double high = max(d1, d2);
    double low = min(d1, d2);

    double total_mass = 100.0;
    double high_mass = chi;
    double low_mass = 100.0 - chi;

    double total_volume = high_mass / high + low_mass / low;

    double density = total_mass / total_volume;

    cout << fixed << setprecision(12) << density << "\n";

    return 0;
}
