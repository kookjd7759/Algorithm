#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int n; cin >> n;
	cout << (n + 2 >= 8 ? "Success!" : "Oh My God!");

	return 0;
}
