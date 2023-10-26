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

int count(int n) {
    int ret = 0;
    for (int i = 1; i <= sqrt(n); i++) 
        if (!(n % i)) ret++;
    return ret;
}

int main() {
	Sync;

	int d[10001];
    int n; in n;
    d[1] = 1; d[2] = 2;
    for (int i = 3; i <= n; i++) 
        d[i] = d[i - 1] + count(i);
    cout << d[n];
}