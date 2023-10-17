#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
	int G[6]{ 1,2,3,3,4,10 };
	int S[7]{ 1,2,2,2,3,5,10 };
	for (int b = 1; b <= t; b++) {
		int Gscore(0), Sscore(0);
		for (int i = 0; i < 6; i++) {
			int n; cin >> n;
			Gscore += G[i] * n;
		}

		for (int i = 0; i < 7; i++) {
			int n; cin >> n;
			Sscore += S[i] * n;
		}
		cout << "Battle " << b << ": ";
		if (Gscore == Sscore) cout << "No victor on this battle field\n";
		else Gscore > Sscore ? cout << "Good triumphs over Evil\n"
			: cout << "Evil eradicates all trace of Good\n";
	}
}