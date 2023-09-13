#include <iostream>
#include <string>

using namespace std;

int main() {
	int list[10]{0, };
	string st; cin >> st;
	for (int i = 0; i < st.size(); i++) {
		int num = st[i] - 48;
		list[num]++;
	}

	list[6] += list[9];
	if (list[6] % 2 == 0)
		list[6] /= 2;
	else {
		list[6] /= 2;
		list[6]++;
	}
	int max_ = list[0];
	for (int i = 1; i < 9; i++)
		max_ = max(list[i], max_);

	cout << max_;
}