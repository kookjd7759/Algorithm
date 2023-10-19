#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b; cin >> a >> b;
    int size = (a + b) / 2;
    for (int i = 0; i < size; i++) {
        int temp = i;
        string s("");
        while (1) {
            s += char(temp % 26 + 'a');
            temp /= 26;
            if (temp == 0) break;
        }
        cout << s << " ";
    }
}