#include <iostream>

using namespace std;

int main() {
	cout << fixed; cout.precision(2);
	while (true){
		double n; cin >> n;
		if (n == 0.0) break;
		
		double ret = n + 1.0;
		ret += n * n + n * n * n + n * n * n * n;
		cout << ret << "\n";
	}
}