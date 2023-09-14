#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int num = 1, cnt(0);
	for (int i = 0; i < 7; i++){
		if (n & num)
			cnt++;
		num = num << 1;
	}
	cout << cnt;
}