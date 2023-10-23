#include <iostream>

using namespace std;
int t, n, l1, l2, a, b;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n >> l1 >> l2;
        for (int j = 0; j < n; j++) cin >> a >> b;
        cout << "Material Management " << i << '\n';
        cout << "Classification ---- End!\n";
    }
}