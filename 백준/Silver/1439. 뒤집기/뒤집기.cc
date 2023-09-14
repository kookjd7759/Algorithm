#include <iostream>

using namespace std;

int main(){
	int num_0(0), num_1(0);
	string st; cin >> st;
	bool ing_0 = false, ing_1 = false;
	st[0] == '0' ? ing_0 = true : ing_1 = true;

	for (int i = 1; i < st.size(); i++){
		if (st[i] == '0'){
			if (ing_1)
				num_1++;
			ing_0 = true;
			ing_1 = false;
		}
		else {
			if (ing_0)
				num_0++;
			ing_0 = false;
			ing_1 = true;
		}
			
	}
	ing_0 ? num_0++ : num_1++;
	cout << min(num_0, num_1);
}