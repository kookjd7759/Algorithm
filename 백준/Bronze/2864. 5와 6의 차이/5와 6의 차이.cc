#include <iostream>
#include <string>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;
int main() {
	Sync;
	auto replace = [&](string* st, char a, string b) -> void {
		for (int i = 0; i < st->size(); i++) {
			if (st->at(i)  == a) st->replace(i, 1, b);
		}
		};
	string a, b; cin >> a >> b;
	replace(&a, '6', "5"); replace(&b, '6', "5");
	cout << stoi(a) + stoi(b) << " ";

	replace(&a, '5', "6"); replace(&b, '5', "6");
	cout << stoi(a) + stoi(b);
}