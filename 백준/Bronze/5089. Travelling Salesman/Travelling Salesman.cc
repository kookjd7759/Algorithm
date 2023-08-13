#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool FindInVec(const vector<string>& vec, string st) {
	for (const auto& iter : vec)
		if (iter == st)
			return true;

	return false;
}

void Function(int i, int size) {
	vector<string> vec{};
	for (int i = 0; i < size + 1; i++) {
		string st; getline(cin, st);
		if (!FindInVec(vec, st))
			vec.push_back(st);
	}

	cout << "Week " << i << " " << vec.size() - 1 << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int i = 1;
	while (true) {
		int Size; cin >> Size;
		if (Size == 0)
			break;

		Function(i, Size);
		i++;
	}
}