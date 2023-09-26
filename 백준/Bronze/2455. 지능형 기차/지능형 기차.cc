#include <iostream>

using namespace std;

int main() {
	int ret(0), cur(0), size = 4;
	while (size--){
	    int a, b; cin >> a >> b;
	    cur += (b - a);
	    ret = max(ret, cur);
	}
	cout << ret;
}