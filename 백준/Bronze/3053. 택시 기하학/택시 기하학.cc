#include <iostream>
#include <cmath>

using namespace std;

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	const double PI = acos(-1.0);
	int R; cin >> R;

	cout << fixed;
	cout.precision(6);
	cout << (double)R * (double)R * PI << "\n";
	cout << (double)R * (double)R * 2.0f;

	return 0;
}