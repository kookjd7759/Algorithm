#include <iostream>
#include <string>

using namespace std;

int cnt = 0x3f3f3f3f, num_int;
bool btn[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

void func(string num) {
	for (int i = 0; i < 10; i++) {
		if (btn[i]) {
			string tmp_num = num + to_string(i);
			int newNum = abs(num_int - stoi(tmp_num)) + tmp_num.length();
			if (cnt >= newNum) cnt = newNum;

			if (tmp_num.length() < 6) func(tmp_num);
		}
	}
}

int main() {
	int n, k; cin >> num_int >> n;
	cnt = min(cnt, abs(100 - num_int));
	for (int i = 0; i < n; i++) { cin >> k; btn[k] = 0; }
	if (n < 10) func("");
	cout << cnt;
}