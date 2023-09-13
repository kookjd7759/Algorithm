#include <iostream>

using namespace std;

int main(){
	int n, x; cin >> n >> x; n--;
	int min_ = 2000001;
	int prevNum; cin >> prevNum;
	while(n--){
		int num; cin >> num;
		min_ = min(min_, prevNum + num);
		prevNum = num;
	}
	cout << min_ * x;
}