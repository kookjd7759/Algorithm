#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<string> vec;
	int n; cin >> n;
	while(n--){
		string st; cin >> st;
		vec.push_back(st);
	}
	
	cin >> n;
	while(n--){
		int a, b; cin >> a >> b;
		for (int i = a - 1; i <= b - 1; i++)
			cout << vec[i] << "\n";
	}
	
}