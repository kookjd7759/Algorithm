#include <iostream>

using namespace std;

string st[9]{
	" @@@   @@@  ",
	"@   @ @   @ ",
	"@    @    @ ",
	"@         @ ",
	" @       @  ",
	"  @     @   ",
	"   @   @    ",
	"    @ @     ",
	"     @      "
};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < n; j++)
			cout << st[i];
		cout << "\n";
	}
}