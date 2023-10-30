#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define endl << "\n"
#define Fori(x) for (int i = 0; i < x; i++)

using namespace std;

char ret[100002];

int main() {
	Sync;

	string a, b; in a >> b;
	
	Fori(a.size()) ret[i] = ((a[i] - '0') & (b[i] - '0')) ? '1' : '0'; out ret endl;
	Fori(a.size()) ret[i] = ((a[i] - '0') | (b[i] - '0')) ? '1' : '0'; out ret endl;
	Fori(a.size()) ret[i] = ((a[i] - '0') ^ (b[i] - '0')) ? '1' : '0'; out ret endl;
	Fori(a.size()) ret[i] = (a[i] == '1' ? '0' : '1'); out ret endl;
	Fori(a.size()) ret[i] = (b[i] == '1' ? '0' : '1'); out ret endl;
}