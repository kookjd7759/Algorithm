#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Space[28][28];
int N;
int Number = 0;
int temp;
vector<int> vec;

void Input() {
	cin >> N;

	for (int i = 1; i <= N; i++) {
		string st; cin >> st;

		for (int j = 1; j <= N; j++)
			Space[i][j] = (bool)(st[j - 1] - 48);
	}
}

void Sovle(int i, int j) {
	Space[i][j] = false;
	temp++;

	if (Space[i - 1][j])
		Sovle(i - 1, j);

	if (Space[i][j - 1])
		Sovle(i, j - 1);

	if (Space[i + 1][j])
		Sovle(i + 1, j);

	if (Space[i][j + 1])
		Sovle(i, j + 1);
}

void Funtion() {
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			if (Space[i][j]) {
				Number++;
				Sovle(i, j);
				vec.push_back(temp);
				temp = 0;
			}
}

void PrintResult() {
	cout << Number << "\n";

	sort(vec.begin(), vec.end());
	for (const auto& iter : vec)
		cout << iter << "\n";
}

int main() {
	Input();
	Funtion();
	PrintResult();
}