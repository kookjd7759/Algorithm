#include<iostream>

using namespace std;

int main(){
	string st = "WelcomeToSMUPC";
	int n; cin >> n;
	cout << st[(n - 1) % st.size()];
}