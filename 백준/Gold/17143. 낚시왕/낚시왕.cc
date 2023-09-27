#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Shark {
	int x, y, speed, dir, kg;
	bool alive = true;
	Shark(int x_, int y_, int speed_, int dir_, int kg_) {
		x = x_; y = y_; speed = speed_; dir = dir_; kg = kg_;
	}
};

int X, Y, M;
int table[101][101];
int temptable[101][101];

int fisher_pos(0), Score(0);

vector<Shark> shark_vec;
int X_move[300], Y_move[300];
bool X_move_DIR[300], Y_move_DIR[300];
int X_move_size, Y_move_size;
int X_cycle_size, Y_cycle_size;

void printTable() {
	cout << "Table\n";
	for (int i = 1; i <= X; i++) {
		for (int j = 1; j <= Y; j++)
			cout << table[i][j] << " ";
		cout << "\n";
	}
}

void init() {
	// ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(X_move, 0, sizeof(X_move)); memset(Y_move, 0, sizeof(Y_move));
	memset(X_move_DIR, true, sizeof(X_move_DIR)); memset(Y_move_DIR, true, sizeof(Y_move_DIR));
	fill_n(&table[0][0], 101 * 101, -1);

	cin >> X >> Y >> M;
	X_move_size = 3 * X - 2;
	Y_move_size = 3 * Y - 2;
	X_cycle_size = 2 * X - 2;
	for (int i = 1; i <= X; i++) {
		X_move[i] = i;
		X_move[i + X_cycle_size] = i;
		if (i <= X - 2) {
			X_move_DIR[i + X] = false;
			X_move[i + X] = X - i;
		}
	}

	Y_cycle_size = 2 * Y - 2;
	for (int i = 1; i <= Y; i++) {
		Y_move[i] = i;
		Y_move[i + Y_cycle_size] = i;
		if (i <= Y - 2) {
			Y_move_DIR[i + Y] = false;
			Y_move[i + Y] = Y - i;
		}
	}

	for (int i = 0; i < M; i++) {
		int x, y, speed, dir, kg;
		cin >> x >> y >> speed >> dir >> kg;

		if (dir == 1 || dir == 2) speed %= ((X - 1) << 1);
		else speed %= ((Y - 1) << 1);

		Shark shark(x, y, speed, dir, kg);
		shark_vec.push_back(shark);
		table[x][y] = i;
	}
}

void fishing() {
	fisher_pos++;
	for (int i = 1; i <= X; i++) {
		if (table[i][fisher_pos] != -1) {
			Score += shark_vec[table[i][fisher_pos]].kg;
			// cout << "fisherMan +" << shark_vec[table[i][fisher_pos]].kg << "\n";
			// cout << "catch the " << table[i][fisher_pos] << "th shark \n";
			shark_vec[table[i][fisher_pos]].alive = false;
			table[i][fisher_pos] = -1;
			return;
		}
	}
}

void shark_one_move(Shark* shark, int index) {
	// cout << "shark " << index << "th";
	if (shark->dir == 1) { // UP
		// cout << " UP / ";
		int move_index = (X_cycle_size + shark->x) - shark->speed;
		shark->x = X_move[move_index];

		if (temptable[shark->x][shark->y] != -1) {
			if (shark_vec[temptable[shark->x][shark->y]].kg > shark->kg)
				shark->alive = false;
			else {
				shark_vec[temptable[shark->x][shark->y]].alive = false;
				temptable[shark->x][shark->y] = index;
			}
		}
		else temptable[shark->x][shark->y] = index;

		if (!X_move_DIR[move_index]) {
			// cout << "TURN ! \n";
			shark->dir++;
		}
	}
	else if (shark->dir == 2) { // DOWN
		// cout << " DOWN / ";
		int move_index = shark->x + shark->speed;
		shark->x = X_move[move_index];

		if (temptable[shark->x][shark->y] != -1) {
			if (shark_vec[temptable[shark->x][shark->y]].kg > shark->kg)
				shark->alive = false;
			else {
				shark_vec[temptable[shark->x][shark->y]].alive = false;
				temptable[shark->x][shark->y] = index;
			}
		}
		else temptable[shark->x][shark->y] = index;

		if (!X_move_DIR[move_index]) {
			// cout << "TURN ! \n";
			shark->dir--;
		}
	}
	else if (shark->dir == 3) { // RIGHT
		// cout << " RIGHT / ";
		int move_index = shark->y + shark->speed;
		shark->y = Y_move[move_index];

		if (temptable[shark->x][shark->y] != -1) {
			if (shark_vec[temptable[shark->x][shark->y]].kg > shark->kg)
				shark->alive = false;
			else {
				shark_vec[temptable[shark->x][shark->y]].alive = false;
				temptable[shark->x][shark->y] = index;
			}
		}
		else temptable[shark->x][shark->y] = index;

		if (!Y_move_DIR[move_index]) {
			// cout << "TURN ! \n";
			shark->dir++;
		}
	}
	else { // LEFT
		// cout << " LEFT / ";
		int move_index = (Y_cycle_size + shark->y) - shark->speed;
		shark->y = Y_move[move_index];

		if (temptable[shark->x][shark->y] != -1) {
			if (shark_vec[temptable[shark->x][shark->y]].kg > shark->kg)
				shark->alive = false;
			else {
				shark_vec[temptable[shark->x][shark->y]].alive = false;
				temptable[shark->x][shark->y] = index;
			}
		}
		else temptable[shark->x][shark->y] = index;

		if (!Y_move_DIR[move_index]) {
			// cout << "TURN ! \n";
			shark->dir--;
		}
	}
	// cout << "\n";
}

void moving_shark() {
	fill_n(&temptable[0][0], 101 * 101, -1);
	for (int i = 0; i < shark_vec.size(); i++) {
		if (!shark_vec[i].alive) continue;
		shark_one_move(&shark_vec[i], i);
	}

	for (int i = 1; i <= X; i++)
		for (int j = 1; j <= Y; j++)
			table[i][j] = temptable[i][j];
}

void cycle() {
	while (fisher_pos < Y) {
		// printTable();
		fishing();
		moving_shark();
	}
}

int main() {
	init();
	cycle();
	cout << Score;
}