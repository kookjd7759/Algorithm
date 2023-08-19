#include <iostream>

using namespace std;

int Arr[26][200000];

void SetArr(string st) {
	int index = (int)st[0] - 97;
	Arr[index][0] = 1;
	for (int i = 1; i < st.length(); i++) {
		int index = (int)st[i] - 97;
		for (int j = 0; j < 26; j++) {
			Arr[j][i] = Arr[j][i - 1];
			if (j == index)
				Arr[j][i]++;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string st; cin >> st;
	SetArr(st);
	int size; cin >> size;
	while (size--) {
		string temp; cin >> temp;
		int start, end; cin >> start >> end;
		int index = (int)(temp[0] - 97);
		if (start == 0)
			cout << Arr[index][end] << "\n";
		else
			cout << Arr[index][end] - Arr[index][start - 1] << "\n";
	}
}