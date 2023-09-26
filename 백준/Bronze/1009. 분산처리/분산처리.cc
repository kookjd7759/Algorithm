#include <iostream>

using namespace std;
int n_10[10][4] = {
	0, 0, 0, 0,
	0, 0, 0, 0,
	6, 2, 4, 8,
	1, 3, 9, 7,
	6, 4, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	1, 7, 9, 3,
	6, 8, 4, 2,
	1, 9, 0, 0
};

int func(const int* a, const int* b){
	int ret = *a % 10;
	if (ret == 1 || ret == 5 || ret == 6) return ret;
	if (ret == 0) return 10;
	if (ret == 4 || ret == 9) return n_10[ret][*b & 1];
	else return n_10[ret][*b % 4];
}

int main(){
	int t; cin >> t;
	while (t--){
		int a; int b; cin >> a >> b;
		cout << func(&a, &b) << "\n";
	}
}