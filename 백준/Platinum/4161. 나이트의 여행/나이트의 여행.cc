#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int moveCount[3][3]{
	{0, 3, 2},
	{3, 2, 1},
	{2, 1, 3}
};

int main() {
    Sync;

	while (true) {
		string line; getline(cin, line);
		if (line == "END") break;

		istringstream iss(line);
		vector<string> tokens;
		string word;
		while (iss >> word) tokens.push_back(word);

		int x(abs(stoi(tokens[0]))), y(abs(stoi(tokens[1])));
		if (x < y) swap(x, y);

		if (x == 1 && y == 0) cout << 3;
		else if (x == 2 && y == 2) cout << 4;
		else {
			int ans = max((x + 1) / 2, (x + y + 2) / 3);
			if (((x + y) & 1) != (ans & 1)) ans++;
			cout << ans;
		}
		cout << "\n";
	}

    return 0;
}
