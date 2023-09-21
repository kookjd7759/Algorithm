#include <iostream>

using namespace std;

int main(){
	cout << fixed; cout.precision(1);
	double w, h; cin >> w >> h;
	cout << (w * h) / 2;
}