#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> vec;

bool VectorFind(string st) {
	for (const auto& iter : vec)
		if (iter == st)
			return true;
	
	return false;
}

void Funtion() {
	string st = ""; getline(cin, st);
	string st_ = "";

	for (int i = 0; i < st.size(); i++) {
		if (st_.size() != 0 && st[i] == ' ') {
			if (VectorFind(st_)) {
				cout << "no";
				exit(0);
			}
			vec.push_back(st_);
			st_ = "";
		}
		else 
			st_ += st[i];
	}

	if (st_.size() != 0)
		if (VectorFind(st_)) {
			cout << "no";
			exit(0);
		}

	cout << "yes";
}

int main() {
	Funtion();
}