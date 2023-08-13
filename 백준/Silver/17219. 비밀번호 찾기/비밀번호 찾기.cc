#include <iostream>
#include <map>
#include <string>

using namespace std;

int N, M;
map<string, string> Dictionary;

void Input() {
	cin >> N >> M;
	while (N--) {
		pair<string, string> st_st;
		cin >> st_st.first;
		cin >> st_st.second;
		Dictionary.insert(st_st);
	}
}

void Function() {
	while (M--) {
		string st; cin >> st;
		cout << Dictionary[st] << "\n";
	}
}

int main() {
	Input();
	Function();
}