#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n; cin >> n;
	while(n--){
		int a; cin >> a;
		if (a == 300)
			cout << 1 << " ";
		else if (a >= 275)
			cout << 2 << " ";
		else if (a >= 250)
			cout << 3 << " ";
		else
			cout << 4 << " ";
	}
}