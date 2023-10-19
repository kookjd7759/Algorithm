#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    double a, b; cin >> a >> b;
    double p = -a + sqrt(a * a - b);
    double m = -a - sqrt(a * a - b);
    if (p == m) cout << p << '\n';
    else cout << m << " " << p << '\n';
}