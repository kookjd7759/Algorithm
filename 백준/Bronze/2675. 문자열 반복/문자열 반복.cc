#include <iostream>

using namespace std;

int main(void)
{
	int T; cin >> T;

	for (int k = 0; k < T; k++) {
		int R; cin >> R;
		char S[21]; cin >> S;
		for (int i = 0;  S[i] != '\0'; i++) {
			for (int j = 0; j < R; j++)
				cout << S[i];
		}
		cout << endl;
	}
}