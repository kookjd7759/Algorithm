#include<iostream>
#include<string>

using namespace std;

int main(){
	string st[7] = {
	"Never gonna give you up",
	"Never gonna let you down",
	"Never gonna run around and desert you",
	"Never gonna make you cry",
	"Never gonna say goodbye",
	"Never gonna tell a lie and hurt you",
	"Never gonna stop"
	};
	int n; cin >> n;
	string a; getline(cin, a);
	bool result = true;
	for (int i = 0; i < n; i++){
		string temp; 
		getline(cin, temp);
		bool check = false;
		for (int j = 0; j < 7; j++)
			if (!st[j].compare(temp)){
				check = true;
				break;
			}
		if(!check)
			result = false;
	}
	result ? cout << "No" : cout << "Yes";
}