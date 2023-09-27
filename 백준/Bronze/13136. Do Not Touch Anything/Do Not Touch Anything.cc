#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c; cin >> a >> b >> c;
    cout << ((long long)ceil(a / c) * (long long)ceil(b / c));
}