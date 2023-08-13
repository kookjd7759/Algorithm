#include <iostream>
#include <string>

using namespace std;

string st1, st2;
int arr[1001][1001]{};

void Function() {
	for (int i = 1; i <= st1.size(); i++)
		for (int j = 1; j <= st2.size(); j++)
			if (st1[i - 1] == st2[j - 1])
				arr[j][i] = arr[j - 1][i - 1] + 1;
			else
				arr[j][i] = max(arr[j - 1][i], arr[j][i - 1]);
}

int main() {
	cin >> st1 >> st2;
	Function();

	cout << arr[st2.size()][st1.size()];
}
