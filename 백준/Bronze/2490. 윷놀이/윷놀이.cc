#include <iostream>

using namespace std;

void func(int ret){
    if (ret == 4) cout << "E\n";
    else if (ret == 3) cout << "A\n"; 
    else if (ret == 2) cout << "B\n"; 
    else if (ret == 1) cout << "C\n"; 
    else cout << "D\n"; 
}

int main() {
	int a, b, c, d; 
	int size = 3;
	while (size--){
	    cin >> a >> b >> c >> d;
	    func(a + b + c + d);
	}
	
}