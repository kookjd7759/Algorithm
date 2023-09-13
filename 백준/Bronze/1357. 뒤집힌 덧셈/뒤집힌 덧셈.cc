#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string x, y; cin >> x >> y;
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());
	int num = stoi(x) + stoi(y);
	string num_st = to_string(num);
	reverse(num_st.begin(), num_st.end());
	cout << stoi(num_st);
}