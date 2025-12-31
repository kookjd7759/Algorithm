#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int a, b, c, d; cin >> a >> b >> c >> d;
	bool shuttle = a + b <= d;
	bool walk = c <= d;

	if (shuttle && walk) cout << "~.~";
	else if (!shuttle && !walk) cout << "T.T";
	else if (shuttle) cout << "Shuttle";
	else if (walk) cout << "Walk";

	return 0;
}
