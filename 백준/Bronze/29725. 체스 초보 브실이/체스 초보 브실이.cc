#include<iostream>

using namespace std;

int main(){
	int Black(0), White(0);
	for (int i = 0; i < 8; i++){
		string st; cin >> st;
		for (int j = 0; j < 8; j++){
			if (st[j] == '.')
				continue;
			if (st[j] >= 97){
				if (st[j] == 'p')
					Black += 1;
				else if (st[j] == 'n' || st[j] == 'b')
					Black += 3;
				else if (st[j] == 'r')
					Black += 5;
				else if (st[j] == 'q')
					Black += 9;
			}
			else {
				if (st[j] == 'P')
					White += 1;
				else if (st[j] == 'N' || st[j] == 'B')
					White += 3;
				else if (st[j] == 'R')
					White += 5;
				else if (st[j] == 'Q')
					White += 9;
			}
		}
	}
	cout << White - Black;
}