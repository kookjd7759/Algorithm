#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cout << fixed; cout.precision(2);
    int n; cin >> n;
    double sum(0);
    double avg, exval(0);
    for (int i = 0; i < n; i++) {
        double num; cin >> num;
        sum += num;
        exval += num * (1.0 / (double)n);
    }
    avg = sum / (double)n;

    if (n == 0 || exval == 0.0) cout << "divide by zero";
    else cout << avg / exval;
}