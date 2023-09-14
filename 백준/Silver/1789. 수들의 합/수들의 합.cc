#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long int n; cin >> n;
	if (n == 1 || n == 2){
	    cout << 1;
	    return 0;
	}
	long int new_n = n * 2;
	long int num = sqrt(new_n); num--;
	while(true){
	    if (num * (num + 1) > new_n)
	        break;
	    num++;
	}
	cout << num - 1;
}