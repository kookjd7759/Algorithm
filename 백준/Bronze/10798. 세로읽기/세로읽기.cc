#include <iostream>

using namespace std;

int main() {
	string st[5];
	int len = 0;
	for (int i = 0; i < 5; i++) {
		cin >> st[i];
		len += st[i].length();
	}

	int i = 0;
	while (len > 0) {
		for (int j = 0; j < 5; j++) {
			if (i < st[j].length()) {
				cout << st[j][i];
				len--;
			}
		}
		i++;
	}
}

