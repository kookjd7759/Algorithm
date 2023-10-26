#include <iostream>
#include <cmath>

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
	if (n == 2) {
		int a, b; in a >> b;
		int size = min(a, b);
		for (int i = 1; i <= size; i++) 
			if (a % i == 0 && b % i == 0) out i endl;
	}
	else {
		int a, b, c; in a >> b >> c;
		int size = min(a, min(b, c));
		for (int i = 1; i <= size; i++)
			if (a % i == 0 && b % i == 0 && c % i == 0) out i endl;
	}
}