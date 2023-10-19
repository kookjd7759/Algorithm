#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int d, n, s, p; cin >> d >> n >> s >> p;
		int paral = n * p + d;
		int nonparal = n * s;
		if (paral == nonparal) cout << "does not matter\n";
		else paral < nonparal ? cout << "parallelize\n" : cout << "do not parallelize\n";
	}
}