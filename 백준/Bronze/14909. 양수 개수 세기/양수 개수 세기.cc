#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, ret(0); 
	while(cin >> n) {
		if (n > 0) ret++;
	}
	cout << ret;
}