#include <iostream>

using namespace std;

int main(void)
{
	char S[101];
	cin >> S;

	int En[26] = {NULL};
	int count = 1;

	for (int i = 0; S[i] != '\0'; i++) {
		if (En[(int)S[i] - 97] <= 0)
			En[(int)S[i] - 97] = count;

		count++;
	}

	for (int i = 0; i < 26; i++) {
		if (En[i] > 0)
			cout << En[i] - 1 << " ";
		else
			cout << "-1" << " ";
	}
}