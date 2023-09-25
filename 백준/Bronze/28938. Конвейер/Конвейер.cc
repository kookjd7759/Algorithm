#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int ret(0);
	while (n--){
		int num; cin >> num;
		ret += num;
	}
	if (ret < 0) cout << "Left";
	else if (ret > 0) cout << "Right";
	else cout << "Stay";
}