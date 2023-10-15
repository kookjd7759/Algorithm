#include <iostream>
#include <string>

using namespace std;

int main() {
	string st; cin >> st;
	int date[3]{ 0, 0, 0 }, idx(0);
	date[0] += (st[0] - 48) * 1000;
	date[0] += (st[1] - 48) * 100;
	date[0] += (st[2] - 48) * 10;
	date[0] += (st[3] - 48);

	date[1] += (st[5] - 48) * 10;
	date[1] += (st[6] - 48);

	date[2] += (st[8] - 48) * 10;
	date[2] += (st[9] - 48);

	bool ch = true;
	if (date[0] > 2023) ch = false;
	else if (date[0] == 2023) {

		if (date[1] > 9) ch = false;
		else if (date[1] == 9) {

			if (date[2] > 16)
				ch = false;
		}
	}

	ch ? cout << "GOOD" : cout << "TOO LATE";
}