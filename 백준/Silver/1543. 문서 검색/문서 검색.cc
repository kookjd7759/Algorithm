#include <iostream>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string st, comp_st; getline(cin, st); getline(cin, comp_st);
	int cnt(0);
	for (int i = 0; i < st.size(); i++){
		if (st[i] == comp_st[0]){
			bool check = true;
			for (int j = 1; j < comp_st.size(); j++){
				if (i + j >= st.size()){
					check = false;
					break;
				}
				if (st[i + j] != comp_st[j]){
					check = false;
					break;
				}
			}
			
			if (check){
				i += comp_st.size() - 1;
				cnt++;
			}
		}
			
	}
	cout << cnt;
}