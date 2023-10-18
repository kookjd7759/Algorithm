#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m; cin >> n >> m;
        if (n < 12 || m < 4) cout << -1;
        else  cout << m * 11 + 4;
        cout << "\n";
    }
}