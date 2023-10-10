#include <iostream>

using namespace std;

int main() {
	cout << fixed; cout.precision(2);
	while(true) {
		double w; cin >> w;
		if (w < 0.0) break;
		cout << "Objects weighing " << w << " on Earth will weigh " << w * 0.167 << " on the moon.\n";
	}
}
