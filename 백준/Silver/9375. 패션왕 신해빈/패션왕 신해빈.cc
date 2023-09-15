#include <iostream>
#include <map>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int size; cin >> size;
		map<string, int> m;
		while(size--){
			string name, tag; cin >> name >> tag;
			if (!m.count(tag))
				m.insert({tag, 1});
			else
				m[tag]++;
		}
		
		if (!size)
			cout << 0 << "\n";
		int ret = 1;
		
		for (auto iter = m.begin() ; iter !=  m.end(); iter++)
			ret *= iter->second + 1;
		
		cout << ret - 1<< "\n";
	}
}