#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, c, d; cin >> a >> b >> c >> d;
    int abCycle = a + b, cdCycle = c + d;
    int p[3]; cin >> p[0] >> p[1] >> p[2];
    for (int i = 0; i < 3; i++) {
        int ch1 = (p[i] % abCycle) <= a && (p[i] % abCycle) != 0 ? 1 : 0;
        int ch2 = (p[i] % cdCycle) <= c && (p[i] % cdCycle) != 0 ? 1 : 0;
        cout << ch1 + ch2 << "\n";
    }
}