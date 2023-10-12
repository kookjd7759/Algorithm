#include <iostream>
#include <string>

using namespace std;

int main() {
	while (true) {
		string st; cin >> st;

		if (st == "CU") cout << "see you\n";
		else if (st == ":-)") cout << "I’m happy\n";
		else if (st == ":-(") cout << "I’m unhappy\n";
		else if (st == ";-)") cout << "wink\n";
		else if (st == ":-P") cout << "stick out my tongue\n";
		else if (st == "(~.~)") cout << "sleepy\n";
		else if (st == "TA") cout << "totally awesome\n";
		else if (st == "CCC") cout << "Canadian Computing Competition\n";
		else if (st == "CUZ") cout << "because\n";
		else if (st == "TY") cout << "thank-you\n";
		else if (st == "YW") cout << "you’re welcome\n";
		else if (st == "TTYL") { cout << "talk to you later\n"; break; }
		else cout << st << "\n";
	}
}