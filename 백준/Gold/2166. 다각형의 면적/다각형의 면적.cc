#include <iostream>
#include <cstring>

using namespace std;

double pos[10001][2];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cout << fixed; cout.precision(1);
	memset(pos, 0, sizeof(pos));
	
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		pos[i][0] = x;
		pos[i][1] = y;
	}
	
	double ret(0);
	for (int i = 0; i < n - 2; i++){
		double a = pos[0][0] * pos[i + 1][1] + pos[i + 1][0] * pos[i + 2][1] + pos[i + 2][0] * pos[0][1];
		double b = pos[i + 1][0] * pos[0][1] + pos[i + 2][0] * pos[i + 1][1] + pos[0][0] * pos[i + 2][1];
		ret += (a - b) / 2;
	}
	cout << abs(ret);
}