#include <iostream>

using namespace std;

int main(){
	int size = 10;
	int angle = 0;
	while(size--){
		int a; cin >> a;
		angle += a;
	}
	string st[4] = {"N", "E", "S", "W"};
	cout << st[angle % 4];
}