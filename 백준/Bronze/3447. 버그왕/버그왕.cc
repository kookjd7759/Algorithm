#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;


int main() {
    Sync;
	
	string line;
	while (getline(cin, line)) {
		while (true) {
			size_t pos = line.find("BUG");
			if (pos == string::npos) break;
			line.erase(pos, 3);
		}
		cout << line << "\n";
	}

    return 0;
}
