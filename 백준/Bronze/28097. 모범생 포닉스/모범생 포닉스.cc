#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int result = (n - 1) * 8;
	while(n--){
		int a; cin >> a;
		result += a;
	}
	cout << result / 24 << " " << result % 24;
}