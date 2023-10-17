#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int cnt(0);
    for (int i = 6; i <= 100; i++) {
        for (int j = 2; j < i; j++) {
            for (int k = j + 1; k < i; k++) {
                for (int l = k + 1; l < i; l++) {
                    if (i * i * i == j * j * j + k * k * k + l * l * l)
                        cout << "Cube = " << i << ", Triple = (" << j << ',' << k << ',' << l << ")\n";
                }
            }
        }
    }
}