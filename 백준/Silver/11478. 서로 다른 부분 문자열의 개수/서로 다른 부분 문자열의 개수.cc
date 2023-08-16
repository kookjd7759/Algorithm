#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	string st; cin >> st;
	int st_size = st.size();
	int count = 0;
	for (int i = 1; i <= st_size; i++) {
		set<string> set_;
		for (int j = 0; j <= st_size - i; j++) {
			string substr_ = st.substr(j, i);
			if (!set_.count(substr_))
				set_.insert(substr_);
		}

		count += set_.size();
	}

	cout << count;
}