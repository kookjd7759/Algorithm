#include "Data.h"

bool Data::Check_func(int n) {
	std::string s = std::to_string(n);

	short check[H][W][10]; memset(check, -1, sizeof check);

	auto DFS = [&](int x, int y, int dep, auto&& DFS) -> bool {
		if (dep == s.size())
			return 1;
		if (table[x][y] != (s[dep] & 15))
			return 0;

		auto& ret = check[x][y][dep];
		if (~ret)
			return ret;
		for (int k = 0; k < 8; k++) {
			int nx = x + "10001222"[k] - '1';
			int ny = y + "22100012"[k] - '1';
			if (nx < 0 || nx >= 8 || ny < 0 || ny >= 14) 
				continue;
			if (DFS(nx, ny, dep + 1, DFS)) 
				return ret = 1;
		}
		return ret = 0;
		};

	for (int i = 0; i < H; i++)
		for (int j = 0; j < W; j++)
			if (DFS(i, j, 0, DFS)) 
				return 1;
	return 0;
}

std::pair<int, int> Data::get_twoScore() {
	memset(counting, false, sizeof(counting));
	int count_cnt(0);
	for (int i = 1; i < 1000; i++) {
		if (counting[i]) {
			count_cnt++;
			continue;
		}

		if (Check_func(i)) {
			count_cnt++;
			counting[i] = true;
			std::string st = std::to_string(i);
			std::reverse(st.begin(), st.end());
			counting[stoi(st)] = true;
		}
	}
	for (int i = 1000; i < 10000; i++) {
		if (counting[i]) {
			count_cnt++;
			continue;
		}

		if (Check_func(i)) {
			counting[i] = true;
			for (const auto iter : checkList[i - 1000].list)
				counting[iter] = true;
			count_cnt++;
		}
	}

	int main_cnt(1);
	for (; counting[main_cnt]; main_cnt++);
	return { count_cnt, main_cnt - 1 };
}


bool Data::CreateBoard_inner(int digit) {
	struct Cell {
		int x, y;
	};
	std::vector<Cell> max_vec;

	int maxScore = score_count;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (table[i][j] == digit)
				continue;

			int ori_digit = table[i][j];
			table[i][j] = digit;
			int current_countScore = cal_countScore();
			if (current_countScore >= maxScore) {
				maxScore = current_countScore;
				if (current_countScore > maxScore)
					max_vec.clear();

				Cell cell;
				cell.x = i; cell.y = j;
				max_vec.push_back(cell);
			}

			table[i][j] = ori_digit;
		}
	}

	if (max_vec.size() == 0)
		return false;

	Random rand;
	int index = rand.GetInt(0, max_vec.size());

	table[max_vec[index].x][max_vec[index].y] = digit;
	update_score();
	return true;
}



int Data::cal_mainScore() {
	int cnt(1);
	for (; Check_func(cnt); cnt++);
	return cnt - 1;
}

int Data::cal_countScore() {
	memset(counting, false, sizeof(counting));
	int cnt(0);
	for (int i = 1; i < 1000; i++) {
		if (counting[i]) {
			cnt++;
			continue;
		}

		if (Check_func(i)) {
			cnt++;
			counting[i] = true;
			std::string st = std::to_string(i);
			std::reverse(st.begin(), st.end());
			counting[stoi(st)] = true;
		}
	}
	for (int i = 1000; i < 10000; i++) {
		if (counting[i]) {
			cnt++;
			continue;
		}

		if (Check_func(i)) {
			counting[i] = true;
			for (const auto iter : checkList[i - 1000].list)
				counting[iter] = true;
			cnt++;
		}
	}
	return cnt;
}

void Data::print() {
	std::cout << "----<Board>---\n"; // print table
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++)
			std::cout << table[i][j];
		std::cout << "\n";
	}
	std::cout << "--------------\n";
	std::cout << "Main score  : " << score_main << "\n"; // print main score
	std::cout << "Count score : " << score_count << "\n"; // print count score
}

void Data::load() {
	std::cout << "Reading Data.txt ..\n";

	std::ifstream fin(Path);
	if (!fin.is_open()) {
		std::cout << "ERROR::I can't find the file\n";
		exit(0);
	}
	std::string line;

	for (int j = 0; j < H; j++) { // read
		getline(fin, line);
		if (line.size() < 8) {
			std::cout << "ERROR::DB table is not available\n";
			exit(0);
		}

		for (int k = 0; k < W; k++)
			table[j][k] = line[k] - 48;
	}
	fin.close();
	update_score();
	std::cout << "Reading Complete !\n";
}

void Data::create_random() {
	std::memset(table, 0, sizeof(table));
	update_score();
	// std::cout << "Start Creating Table <random> . . .\n";
	Random rand;
	for (int i = 0; i < H; i++)
		for (int j = 0; j < W; j++) {
			int num = rand.GetInt(0, 10);
			table[i][j] = num;
		}
	update_score();
	// std::cout << "Create New Board -> <" << score_count << ">\n";
}

void Data::update(int i, int j, int num) {
	table[i][j] = num;
	update_score();
}

void Data::update(int i, int j, int num, int i_, int j_, int num_) {
	table[i][j] = num;
	table[i_][j_] = num_;
	update_score();
}

void Data::update_score() {
	std::pair<int, int> count_main = get_twoScore();
	score_count = count_main.first;
	score_main = count_main.second;
}

inline void Data::update_mainScore() {
	score_main = cal_mainScore();
}

inline void Data::update_countScore() {
	score_count = cal_countScore();
}

void Data::set(int(*new_table)[W]) {
	for (int i = 0; i < H; i++)
		for (int j = 0; j < W; j++)
			table[i][j] = new_table[i][j];
	update_score();
}

void Data::create_count() {
	std::memset(table, 0, sizeof(table));
	std::memset(counting, false, sizeof(counting));
	update_score();
	std::cout << "Start Creating Table <count> . . .\nloading [";
	
	int numlist[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i(0), digit;
	do {
		if (i % 16 == 0)
			std::cout << "■";

		digit = numlist[i % 9];
		i++;
	} while (CreateBoard_inner(digit));

	update_score();
	std::cout << "] 100%\n";
	std::cout << "Create New Board -> <" << score_count << ">\n";
}


