#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cout << fixed; cout.precision(9);
    double l; cin >> l;
    cout << (sqrt(3) * l * l) / 4;
}