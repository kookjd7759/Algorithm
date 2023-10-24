#include <iostream>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int main() {
	sync;
	string n1, n2; cin >> n1 >> n2;
	long long ret(0);
	for (int i = 0; i < n1.size(); i++)
		for (int j = 0; j < n2.size(); j++)
			ret += (n1[i] - 48) * (n2[j] - 48);
	cout << ret;
}