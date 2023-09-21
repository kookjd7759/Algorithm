#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	while(n--){
		string st; cin >> st;
		string ret = "";
		if (st[0] == 'A') st[1] == 'l' ? ret = "204" : ret = "302";
		else if (st[0] == 'D') ret = "207";
		else if (st[0] == 'C') ret = "B101";
		else if (st[0] == 'N') ret = "303";
		else if (st[0] == 'S') ret = "501";
		else if (st[0] == 'T') ret = "105";
		cout << ret << "\n";
	}
}