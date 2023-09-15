#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int n; cin >> n;
	vector<int> vec(n + 1, 0); vec[1] = 1;
	
	for (int i = 2; i <= n; i++){
		int min_ = i - 1;
		for (int j = 2; j * j <= i; j++)
			min_ = min(min_, vec[i - j * j]);
		vec[i] = ++min_;
	}
	cout << vec[n];
}