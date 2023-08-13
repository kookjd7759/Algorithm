#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Per {
	int num = 0;
	int age = 0;
	string name = "";
};

bool Comp(const Per x, const Per y) {
	if (x.age != y.age)
		return x.age < y.age;
	else
		return x.num < y.num;
}

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	vector<Per> vec;

	for (int i = 0; i < N; i++) {
		Per per; per.num = i + 1;
		cin >> per.age;
		cin >> per.name;
		vec.push_back(per);
	}
	
	sort(vec.begin(), vec.end(), Comp);

	for (int i = 0; i < vec.size(); i++) 
		cout << vec.at(i).age << " " << vec.at(i).name << "\n";

    return 0;
}