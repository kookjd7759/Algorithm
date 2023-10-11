#include <iostream>

using namespace std;

int main() {
    long long w, b; cin >> w >> b;
    if (w >= b) cout << b;
    else cout << w + 1;
}