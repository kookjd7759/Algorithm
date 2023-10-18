#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    int _2(0), _e(0);
    for (int i = 0; i < t; i++) {
        char c; cin >> c;
        if (c == '2') _2++;
        else _e++;
    }
    if (_2 == _e) cout << "yee";
    else _2 > _e ? cout << "2" : cout << "e";
}