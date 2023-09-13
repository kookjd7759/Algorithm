#include <iostream>

using namespace std;

int main(){
	int list[10]{0, };
	for (int i = 0; i < 5; i++){
		int a; cin >> a;
		list[a]++;
	}
	
	for (int i = 0; i < 10; i++){
		if (list[i] % 2 == 1){
			cout << i;
			break;
		}
	}
}