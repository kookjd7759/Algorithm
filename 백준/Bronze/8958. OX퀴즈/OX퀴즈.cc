#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int* ScoreArry = new int[n];

	int count = 0;
	char context[81] = "";

	for (int i = 0; i < n; i++) {
		ScoreArry[i] = 0;

		cin >> context;

		for (int j = 0; context[j] != '\0'; j++) {
			if (context[j] == 'O')
				count += 1;
			else 
				count = 0;

			ScoreArry[i] += count;
		}
		count = 0;
	}

	for (int i = 0; i < n; i++) {
		cout << ScoreArry[i] << endl;
	}
}