#include <iostream>

using namespace std;

int main(){
	int n, w, h, l; cin >> n >> w >> h >> l;
	cout << min(((w / l) * (h / l)), n);
}