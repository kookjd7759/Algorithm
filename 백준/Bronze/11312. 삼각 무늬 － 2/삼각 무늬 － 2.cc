#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        double a, b; cin >> a >> b;
        cout << (long long)ceil(a / b * a / b) << '\n';
    }
}