#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n, m; cin >> n >> m;
	int minp(1001), minn(1001);
	while(m--){
		int p, n; cin >> p >> n;
		minp = min(minp, p);
		minn = min(minn, n);
	}
	
	if (minn * (n % 6) > minp)
		cout << minp * ((n / 6) + 1);
	else if (minp > (minn * 6))
		cout << minn * n;
	else 
		cout << minp * (n / 6) + minn * (n % 6);
}
	