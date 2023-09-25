#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct Door{
	int x, y;
	int ver;
};

vector<Door> door_vec;
int table[102][102];
bool visited[102][102];
bool keys[26];
int score;
int h, w;
int dir[4][2] = {
	0, 1,
	0, -1,
	1, 0,
	-1, 0
};

inline void takeKey(const char* key){ 
	// cout << "Get Key " << *key << "\n"; 
	keys[*key - 97] = true; 
}
inline void takeKey(const int* key){ 
	// cout << "Get Key " << (char)*key << "\n"; 
	keys[*key - 97] = true; 
}
inline bool isDoor(const int* x, const int* y) {
	if (table[*x][*y] >= 'A' && table[*x][*y] <= 'Z')
		return true;
	return false;
}
inline bool isKey(const int* x, const int* y) {
	if (table[*x][*y] >= 'a' && table[*x][*y] <= 'z')
		return true;
	return false;
}

void search(int x, int y){
	// cout << "POS : (" << x << ", " << y << ")\n";
	visited[x][y] = true;
	if (isKey(&x, &y)){
		takeKey(&table[x][y]);
		table[x][y] = 0;
	}
	else if (isDoor(&x, &y)){
		visited[x][y] = false;
		Door door; door.x = x; door.y = y; door.ver = table[x][y];
		door_vec.push_back(door);
		return;
	}
	else if (table[x][y] == 1){
		score++;
		table[x][y] = 0;
	}
	
	for (int d = 0; d < 4; d++){
		int x_ = x + dir[d][0];
		int y_ = y + dir[d][1];
		if (table[x_][y_] != -1 && !visited[x_][y_])
			search(x_, y_);
	}
}

bool openDoor(){
	bool check = false;
	for (int i = 0; i < door_vec.size(); i++){
		Door door = door_vec[i];
		if (keys[door.ver - 'A']){
			// cout << "open " << (char)door.ver << " Door\n";
			door_vec.erase(door_vec.begin() + i); i--;
			table[door.x][door.y] = 0;
			check = true;
			search(door.x, door.y);
		}
	}
	return check;
}

void enter(){
	auto check = [&](int i, int j) -> void {
		if (table[i][j] != -1 && !visited[i][j]) search(i, j);
	};
	for (int i = 1; i <= h; i++){
		if (i == 1 || i == h){
			for (int j = 1; j <= w; j++) 
				check(i, j);
		}
		else {
			check(i, 1);
			check(i, w);
		}
	}
	/*
	cout << "Find Door : ";
	for (const auto iter : door_vec)
		cout << (char)iter.ver << " ";
	cout << "\nstart open Door\n";
	*/
	while(openDoor());
}

int main() {
	// ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		fill_n(&table[0][0], 102 * 102, -1);
		memset(visited, false, sizeof(visited));
		memset(keys, false, sizeof(keys));
		score = 0; door_vec.clear();
		
		cin >> h >> w;
		for (int i = 1; i <= h; i++) {
			string st; cin >> st;
			for (int j = 1; j <= w; j++){
				char cell = st[j - 1];
				if (cell == '.') table[i][j] = 0;
				else if (cell == '$') table[i][j] = 1;
				else if ((cell >= 'A' && cell <= 'Z') || (cell >= 'a' && cell <= 'z'))
					table[i][j] = cell;
			}
		}
		
		string key; cin >> key;
		if (key[0] != '0') for (int i = 0; i < key.size(); i++) 
				takeKey(&key[i]);
		/*
		cout << "TABLE\n";
		for (int i = 0; i <= h + 1; i++) {
			for (int j = 0; j <= w + 1; j++) 
				cout << table[i][j] << " ";
			cout << "\n";
		}
		cout << "VISITED\n";
		for (int i = 0; i <= h + 1; i++) {
			for (int j = 0; j <= w + 1; j++) 
				cout << visited[i][j] << " ";
			cout << "\n";
		}
		*/
		
		enter();
		cout << score << "\n";
	}
}