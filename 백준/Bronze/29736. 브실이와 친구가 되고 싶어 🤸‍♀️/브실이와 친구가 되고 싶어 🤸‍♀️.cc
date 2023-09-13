#include<iostream>

using namespace std;

int main(){
	int a,b,k,x; cin >> a >> b >> k >> x;
	int a_, b_;
	if (k - x <= 0)
		a_ = 0;
	else 
		a_ = k - x;
	b_ = k + x;
	
	int l, r;
	l = max(a, a_);
	r = min(b, b_);
	if (l > r)
		cout << "IMPOSSIBLE";
	else
		cout << r - l + 1;
}