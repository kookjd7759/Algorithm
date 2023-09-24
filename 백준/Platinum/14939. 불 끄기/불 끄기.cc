#include <iostream>
#include <bitset>

using namespace std;

int light[10];
int temp_light[10];
int bits[10]; int bitMAX(0);
int dir[4][2] = {
	0, 1,
	0, -1,
	1, 0,
	-1, 0
};

void print_temp() {
	cout << "---Light--\n";
	for (int i = 0; i < 10; i++)
		cout << bitset<10>(temp_light[i]) << "\n";
	cout << "----------\n";
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	auto exchange = [&](int i, int j) -> void {
		if (temp_light[i] & bits[j]) temp_light[i] &= ~bits[j];
		else temp_light[i] |= bits[j];
		};

	auto pushButton = [&](int i, int j) -> void {
		exchange(i, j);
		for (int d = 0; d < 4; d++) {
			int x = i + dir[d][0], y = j + dir[d][1];
			if (x < 0 || x > 9 || y < 0 || y > 9) continue;
			exchange(x, y);
		}
		};

	auto check = [&]() -> bool {
		for (int i = 0; i < 10; i++)
			if (temp_light[i])
				return false;
		return true;
		};

	for (int i = 0; i < 10; i++) {
		bits[i] = (1 << i);
		bitMAX |= bits[i];
	} 

	for (int i = 0; i < 10; i++) {
		string st; cin >> st;
		int n(0);
		for (int j = 0; j < 10; j++)
			if (st[j] == 'O') n |= bits[j];
		light[i] = n;
	}

	int ret = 1e9;
	for (int step = 0; step <= bitMAX; step++) {
		int cnt(0);
		for (int i = 0; i < 10; i++) temp_light[i] = light[i];

		for (int i = 0; i < 10; i++) {
			if (step & bits[i]) {
				cnt++; pushButton(0, i);
			}
		}

		for (int x = 1; x < 10; x++) for (int y = 0; y < 10; y++)
			if (temp_light[x - 1] & bits[y]) {
				cnt++; pushButton(x, y);
			}

		if (check()) ret = min(ret, cnt);
	}

	ret != 1e9 ? cout << ret : cout << -1;
}