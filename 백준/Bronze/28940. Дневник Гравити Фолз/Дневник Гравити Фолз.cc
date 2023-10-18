#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int w, h; cin >> w >> h; 
	int n, a, b; cin >> n >> a >> b;
	int onepage = (w / a) * (h / b);
	if (w < a || h < b || onepage == 0) cout << -1;
	else {
		n % onepage == 0 ? cout << n / onepage : cout << n / onepage + 1;
	}
}