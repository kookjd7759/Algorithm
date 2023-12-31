#include <iostream>

using namespace std;

string num[10][8]{
	"..#####..",
	".##...##.",
	"##.....##",
	"##.....##",
	"##.....##",
	".##...##.",
	"..#####..",
	".........",

	"....##...",
	"..####...",
	"....##...",
	"....##...",
	"....##...",
	"....##...",
	"..######.",
	".........",

	".#######.",
	"##.....##",
	".......##",
	".#######.",
	"##.......",
	"##.......",
	"#########",
	".........",

	".#######.",
	"##.....##",
	".......##",
	".#######.",
	".......##",
	"##.....##",
	".#######.",
	".........",

	"##.......",
	"##....##.",
	"##....##.",
	"##....##.",
	"#########",
	"......##.",
	"......##.",
	".........",

	".########",
	".##......",
	".##......",
	".#######.",
	".......##",
	".##....##",
	"..######.",
	".........",

	".#######.",
	"##.....##",
	"##.......",
	"########.",
	"##.....##",
	"##.....##",
	".#######.",
	".........",

	".########",
	".##....##",
	".....##..",
	"....##...",
	"...##....",
	"...##....",
	"...##....",
	".........",

	".#######.",
	"##.....##",
	"##.....##",
	".#######.",
	"##.....##",
	"##.....##",
	".#######.",
	".........",

	".#######.",
	"##.....##",
	"##.....##",
	".########",
	".......##",
	"##.....##",
	".#######.",
	"........."
};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string st[8];
		for (int i = 0; i < 8; i++) 
			cin >> st[i];

		for (int i = 0; i < 10; i++) {
			bool ch = true;
			for (int j = 0; j < 8; j++) {
				if (num[i][j].compare(st[j]) != 0) {
					ch = false;
					break;
				}
			}
			if (ch) cout << i;
		}
	}
}