#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        double p[7];
        int score(0);
        for (int i = 0; i < 7; i++) cin >> p[i];
        score += 9.23076 * pow(26.7 - p[0], 1.835);
        score += 4.99087 * pow(42.5 - p[3], 1.81);
        score += 0.11193 * pow(254 - p[6], 1.88);

        score += 1.84523 * pow(p[1] - 75, 1.348);
        score += 56.0211 * pow(p[2] - 1.5, 1.05);
        score += 0.188807 * pow(p[4] - 210, 1.41);
        score += 15.9803 * pow(p[5] - 3.8, 1.04);
        cout << score << '\n';
    }
}