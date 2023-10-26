#include <iostream>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)

using namespace std;

int main() {
	Sync;

	int n; in n;
	string st; getline(cin, st);
	Fori(n) {
		getline(cin, st);
		vector<string> vec;
		string temp("");
		Forj(st.size()) {
			if (st[j] == ' ') {
				vec.push_back(temp);
				temp = "";
			}
			else temp += st[j];
		}
		vec.push_back(temp);
		out "Case #" << i + 1 << ": ";
		for (int j = vec.size() - 1; j >= 0; j--) 
			out vec[j] << " ";
		ent;
	}
}