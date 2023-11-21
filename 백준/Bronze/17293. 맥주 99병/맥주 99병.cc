#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
#define Interactive cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
	Sync;
	int n; in n;
	for (int i = n; i >= 0; i--) {
		if (i > 2) {
			printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
			printf("Take one down and pass it around, %d bottles of beer on the wall.\n\n", i - 1);
		}
		else if (i == 2) {
			printf("2 bottles of beer on the wall, 2 bottles of beer.\n");
			printf("Take one down and pass it around, 1 bottle of beer on the wall.\n\n");
		}
		else if (i == 1) {
			printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
			printf("Take one down and pass it around, no more bottles of beer on the wall.\n\n");
		}
	}
	printf("No more bottles of beer on the wall, no more bottles of beer.\n");
	if (n == 1) {
		printf("Go to the store and buy some more, 1 bottle of beer on the wall.\n");
	}
	else {
		printf("Go to the store and buy some more, %d bottles of beer on the wall.\n", n);
	}
}