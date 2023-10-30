#include <iostream>
#include <string.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define endl << "\n"
#define Fori(x) for (int i = 0; i < x; i++)

using namespace std;

char a[100001], b[100001], ret[100001];

int main() {
	Sync;

	in a >> b;
	int s = strlen(a);
	
	Fori(s) ret[i] = ((a[i] - '0') & (b[i] - '0')) ? '1' : '0'; out ret endl;
	Fori(s) ret[i] = ((a[i] - '0') | (b[i] - '0')) ? '1' : '0'; out ret endl;
	Fori(s) ret[i] = ((a[i] - '0') ^ (b[i] - '0')) ? '1' : '0'; out ret endl;
	Fori(s) ret[i] = (a[i] == '1' ? '0' : '1'); out ret endl;
	Fori(s) ret[i] = (b[i] == '1' ? '0' : '1'); out ret endl;
}