#include<iostream>

using namespace std;

int main(){
	string st; cin >> st;
	int result(0);
	for (int i = 0; i < st.size(); i++){
		if (st[i] == 'D'){
			if (st[i + 1] == 'K' && st[i + 2] == 'S' && st[i + 3] == 'H')
				result++;
		}
	}
	cout << result;
}