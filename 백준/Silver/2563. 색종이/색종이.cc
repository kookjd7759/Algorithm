#include <iostream>

using namespace std;

int main() {
	bool papper[100][100];
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			papper[i][j] = 0;

	int size; cin >> size;
	while (size--) {
		int a, b; cin >> a >> b;
		for (int i = a; i < a + 10; i++)
			for (int j = b; j < b + 10; j++)
				papper[i][j] = 1;
	}

	int count = 0;

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (papper[i][j])
				count += 1;

	cout << count;
}