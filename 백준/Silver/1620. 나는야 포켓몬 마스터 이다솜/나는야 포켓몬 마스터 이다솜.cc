#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int N, M;
map<int, string> Map_int_string;
map<string, int> Map_string_int;

void Input() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string st; cin >> st;
		Map_int_string.insert(pair<int, string>(i + 1, st));
		Map_string_int.insert(pair<string, int>(st, i + 1));
	}
}

void Function() {
	for (int i = 0; i < M; i++) {
		string st; cin >> st;
		if (st[0] >= 48 && st[0] <= 57) {
			int num = stoi(st);
			cout << Map_int_string[num] << "\n";
		}
		else 
			cout << Map_string_int[st] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	Input();
	Function();

	return 0;
}