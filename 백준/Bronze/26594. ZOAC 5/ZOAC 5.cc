#include <iostream>
#include <string>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int main() {
	sync;

	string st; cin >> st;
	char first = st[0];
	int ret(0);
	for (int i = 0; i < st.size(); i++)
		if (first == st[i]) ret++;
		else break;
	cout << ret;
}