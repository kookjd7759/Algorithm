#include<iostream>

using namespace std;

int main(){
	int size; cin >> size;
	for (int i = 0; i < size; i++){
		int n; cin >> n;
		if (n > 4500)
			n = 1;
		else if (n > 1000)
			n = 2;
		else if (n > 25)
			n = 3;
		else
			n = 4;
		cout << "Case #" << i + 1 << ": ";
		n == 4 ? cout << "World Finals\n" : cout << "Round " << n << "\n";
	}
}