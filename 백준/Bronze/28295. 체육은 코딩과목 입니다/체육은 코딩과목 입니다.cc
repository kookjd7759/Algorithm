#include <iostream>

using namespace std;

int main(){
	int s=10,a(0), b;
	while(s--){
		cin >> b;
		a += b;
	}
	cout << "NESW"[a% 4];
}