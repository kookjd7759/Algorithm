#include <iostream>

using namespace std;

bool arr[100][100];

int main() {
	int a, b; cin >> a >> b;
	for (int i = 0; i < a; i++) { 
		string st; cin >> st;
		for (int j = 0; j < b; j++)
			st[j] == 'W' ? arr[i][j] = 0 : arr[i][j] = 1;
	}

	int ret(0);
	for (int i = 0; i < a; i++) {
		string st; cin >> st;
		for (int j = 0; j < b; j++) {
			bool num;
			st[j] == 'W' ? num = 0 : num = 1;
			if (num == arr[i][j]) ret++;
		}
	}
	cout << ret;
}