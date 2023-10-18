#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    for (int i = 0; i < t; i++) {
        int a; char c; cin >> a >> c;
        for (int j = 0; j < a; j++) cout << c;
        cout << "\n";
    }
}