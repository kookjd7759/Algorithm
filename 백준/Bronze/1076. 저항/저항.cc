#include <iostream>
#include <stack>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;
	string input[3];
	string color[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };


	for (int i = 0; i < 3; i++) cin >> input[i];

	int ret[3];
	for (int i = 0; i < 3; i++) for (int j = 0; j < 10; j++) 
			if (input[i] == color[j]) { 
				ret[i] = j; break; 
			}

	int num = ret[0] * 10 + ret[1];

	if (num == 0) cout << "0";
	else {
		cout << num;
		for (int i = 0; i < ret[2]; i++) cout << "0";
	}
}