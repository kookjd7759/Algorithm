#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
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

void get_bin(int* arr, int n) {
	int i = 0;
	while (n > 0) {
		arr[i] = n % 2;
		n /= 2;
		i++;
	}
}

int main() {
	Sync;

    Testcase{
    string time; in time;
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    int s = stoi(time.substr(6, 2));

    int bin_h[6]; memset(bin_h, 0, sizeof bin_h); get_bin(bin_h, h);
    int bin_m[6]; memset(bin_m, 0, sizeof bin_m); get_bin(bin_m, m);
    int bin_s[6]; memset(bin_s, 0, sizeof bin_s); get_bin(bin_s, s);

    for (int i = 5; i >= 0; i--) out bin_h[i] << bin_m[i] << bin_s[i];
    out " ";

    for (int i = 5; i >= 0; i--) out bin_h[i];
    for (int i = 5; i >= 0; i--) out bin_m[i];
    for (int i = 5; i >= 0; i--) out bin_s[i];
    ent;
	};
}