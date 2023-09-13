#include <iostream>

using namespace std;

int main(){
	string st; cin >> st;
	if (st.compare("fdsajkl;") == 0 || st.compare("jkl;fdsa") == 0)
		cout << "in-out";
	else if (st.compare("asdf;lkj") == 0 || st.compare(";lkjasdf") == 0)
		cout << "out-in";
	else if (st.compare("asdfjkl;") == 0)
		cout << "stairs";
	else if (st.compare(";lkjfdsa") == 0)
		cout << "reverse";
	else
		cout << "molu";
}