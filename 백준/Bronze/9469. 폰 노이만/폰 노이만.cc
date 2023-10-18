#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cout << fixed; cout.precision(2);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        double d, a, b, f, timeLeft; 
        int n; cin >> n >> d >> a >> b >> f;
        timeLeft = d / (a + b);
        cout << n << " " << f * timeLeft << "\n";
    }
}