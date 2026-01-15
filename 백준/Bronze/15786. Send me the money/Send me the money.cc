#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;
	
    int N, M; cin >> N >> M;
	string key; cin >> key;
	while (M--) {
		string target; cin >> target;
		bool check(false);
		int keyi(0);
		for (const char c : target) {
			if (key[keyi] == c) keyi++;
			if (keyi == key.size()) {
				check = true;
				break;
			}
		}
		cout << (check ? "true" : "false") << "\n";
	}

    return 0;
}
