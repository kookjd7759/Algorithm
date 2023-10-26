#include <iostream>

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

	int a[100], n; in n;
	Fori(n) in a[i];
	int sum(a[0]), size(1);
	Fori(n) {
		if (i == 0) out a[i] << " ";
		else {
			size++;
			int newNum = a[i] * size - sum;
			sum += newNum;
			out newNum << " ";
		}
	}
}