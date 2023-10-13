#include <iostream>
#include <string>

using namespace std;

int main() {
    int h1, b1, h2, b2; cin >> h1 >> b1 >> h2 >> b2;
    int p1 = 3 * h1 + b1, p2 = 3 * h2 + b2;

    string ans = "NO SCORE";
    if (p1 > p2) ans = "1 " + to_string((p1 - p2));
    else if (p2 > p1) ans = "2 " + to_string((p2 - p1));
    cout << ans << "\n";
}