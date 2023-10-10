#include <iostream>
#include <string>

using namespace std;

int main() {
	int n; cin >> n;
	int cnt(0);
	while (n--){
		string st; cin >> st;
		st = st.erase(0, 2);
		if (stoi(st) <= 90) cnt++;
	}
	cout << cnt;
}
