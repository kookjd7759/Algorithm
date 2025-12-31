#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;
	
	int n; cin >> n;
	string st1, st2; cin >> st1 >> st2;

	int sum1(0), sum2(0);
	bool isSame = true;
	for (int i = 0; i < n; ++i) {
		if (st1[i] == 'w') sum1++;
		if (st2[i] == 'w') sum2++;
		if (st1[i] != st2[i]) isSame = false;
	}

	if (!isSame) {
		cout << (sum1 == sum2 ? "Its fine" :
			sum1 < sum2 ? "Manners maketh man"
			: "Oryang");
	}
	else cout << "Good";

	return 0;
}
