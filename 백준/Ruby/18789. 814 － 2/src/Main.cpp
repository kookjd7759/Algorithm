#include <ctime>
#include "DB.h"

using namespace std;

void change_random_n(Data* data, int n) {
	bool check[H * W]; memset(check, false, sizeof(check));
	cout << "change_random_n()::Change " << n << "Cell\n";
	while (n--) {
		Random rand;
		int index;
		do {
			index = rand.GetInt(0, H * W);
		} while (check[index]);
		check[index] = true;

		int x = index / W, y = index % W;
		int num = rand.GetInt(0, 10);
		data->table[x][y] = num;
	}
	data->update_score();
}

int set_1_count(Data* data) {
	cout << "set_1()::Loading ... ";
	struct Cell {
		int x, y;
		int digit;
	};
	vector<Cell> max_vec;
	int startCount = data->score_count;
	int maxCount = data->score_count;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			for (int num = 0; num < 10; num++) {
				int ori_num = data->table[i][j];
				if (ori_num == num)
					continue;
				data->table[i][j] = num;
				int newCountScoredata = data->cal_countScore();
				if (maxCount <= newCountScoredata) {
					if (maxCount < newCountScoredata)
						max_vec.clear();
					maxCount = newCountScoredata;
					Cell cell;
					cell.x = i; cell.y = j;
					cell.digit = num;
					max_vec.push_back(cell);
				}
				data->table[i][j] = ori_num;
			}
		}
	}

	if (max_vec.size() == 0) {
		cout << "No change\n";
		return -1;
	}

	Random rand;
	int index = rand.GetInt(0, max_vec.size());
	data->update(max_vec[index].x, max_vec[index].y, max_vec[index].digit);
	if (data->score_count == startCount) {
		cout << "Find same Table <" << data->score_count << ">\n";
		return 0;
	}
	else {
		cout << "Find new Table <" << data->score_count << ">\n";
		return 1;
	}
}

int set_1_main(Data* data) {
	cout << "set_1()::Loading ... ";
	struct Cell {
		int x, y;
		int digit;
	};
	vector<Cell> max_vec;
	int startCount = data->score_main;
	int maxCount = data->score_main;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			for (int num = 0; num < 10; num++) {
				int ori_num = data->table[i][j];
				if (ori_num == num)
					continue;
				data->table[i][j] = num;
				int newMainScore = data->cal_mainScore();
				if (maxCount <= newMainScore) {
					if (maxCount < newMainScore)
						max_vec.clear();
					maxCount = newMainScore;
					Cell cell;
					cell.x = i; cell.y = j;
					cell.digit = num;
					max_vec.push_back(cell);
				}
				data->table[i][j] = ori_num;
			}
		}
	}

	if (max_vec.size() == 0) {
		cout << "No change\n";
		return -1;
	}

	Random rand;
	int index = rand.GetInt(0, max_vec.size());
	data->update(max_vec[index].x, max_vec[index].y, max_vec[index].digit);
	cout << "(" << max_vec[index].x << ", " << max_vec[index].y << ") -> " << max_vec[index].digit << " ";
	if (data->score_main == startCount) {
		cout << "Find same Table <" << data->score_main << ">\n";
		return 0;
	}
	else {
		cout << "Find new Table <" << data->score_main << ">\n";
		data->print();
		return 1;
	}
}

int set_2_count(Data* data) {
	cout << "set_2()::Loading ... \n";
	struct Cell {
		int x, y, x_, y_, num1, num2;
	};
	vector<Cell> max_vec;
	int startCount = data->score_count;
	int maxCount = data->score_count;
	for (int i = 0; i < H * W - 1; i++) {
		int x = i / W, y = i % W;
		cout << i << "\n";

		for (int j = i + 1; j < H * W; j++) {
			int x_ = j / W, y_ = j % W;

			int ori_num_1 = data->table[x][y];
			int ori_num_2 = data->table[x_][y_];

			for (int num1 = 0; num1 < 10; num1++) {
				if (ori_num_1 == num1)
					continue;

				for (int num2 = 0; num2 < 10; num2++) {
					if (ori_num_2 == num2)
						continue;
					data->table[x][y] = num1;
					data->table[x_][y_] = num2;
					int newMainScore = data->cal_countScore();
					if (maxCount <= newMainScore) {
						if (maxCount < newMainScore)
							max_vec.clear();
						maxCount = newMainScore;
						Cell cell;
						cell.x = x; cell.y = y;
						cell.x_ = x_; cell.y_ = y_;
						cell.num1 = num1;
						cell.num2 = num2;
						max_vec.push_back(cell);
						data->print();
					}
				}
			}
			data->table[x][y] = ori_num_1;
			data->table[x_][y_] = ori_num_2;
		}
	}

	if (max_vec.size() == 0) {
		cout << "No change\n";
		return -1;
	}

	Random rand;
	int index = rand.GetInt(0, max_vec.size());
	data->update(max_vec[index].x, max_vec[index].y, max_vec[index].num1, max_vec[index].x_, max_vec[index].y_, max_vec[index].num2);
	if (data->score_count == startCount) {
		cout << "Find same Table <" << data->score_count << ">\n";
		return 0;
	}
	else {
		cout << "Find new Table <" << data->score_count << ">\n";
		return 1;
	}
}

int set_2_main(Data* data) {
	cout << "set_2()::Loading ... \n";
	struct Cell {
		int x, y, x_, y_, num1, num2;
	};
	vector<Cell> max_vec;
	int startCount = data->score_main;
	int maxCount = data->score_main;
	for (int i = 0; i < H * W - 1; i++) {
		int x = i / W, y = i % W;
		cout << i << "\n";

		for (int j = i + 1; j < H * W; j++) {
			int x_ = j / W, y_ = j % W;

			int ori_num_1 = data->table[x][y];
			int ori_num_2 = data->table[x_][y_];

			for (int num1 = 0; num1 < 10; num1++) {
				if (ori_num_1 == num1)
					continue;

				for (int num2 = 0; num2 < 10; num2++) {
					if (ori_num_2 == num2)
						continue;
					data->table[x][y] = num1;
					data->table[x_][y_] = num2;
					int newMainScore = data->cal_mainScore();
					if (maxCount <= newMainScore) {
						if (maxCount < newMainScore)
							max_vec.clear();
						maxCount = newMainScore;
						Cell cell;
						cell.x = x; cell.y = y;
						cell.x_ = x_; cell.y_ = y_;
						cell.num1 = num1;
						cell.num2 = num2;
						max_vec.push_back(cell);
						data->print();
					}
				}
			}
			data->table[x][y] = ori_num_1;
			data->table[x_][y_] = ori_num_2;
		}
	}

	if (max_vec.size() == 0) {
		cout << "No change\n";
		return -1;
	}

	Random rand;
	int index = rand.GetInt(0, max_vec.size());
	data->update(max_vec[index].x, max_vec[index].y, max_vec[index].num1, max_vec[index].x_, max_vec[index].y_, max_vec[index].num2);
	if (data->score_main == startCount) {
		cout << "Find same Table <" << data->score_main << ">\n";
		return 0;
	}
	else {
		cout << "Find new Table <" << data->score_main << ">\n";
		return 1;
	}
}

int exchange_2_count(Data* data) {
	cout << "exchange_2()::Loading ... ";
	struct Cell {
		int x, y, x_, y_;
	};
	vector<Cell> max_vec;

	int startCount = data->score_count;
	int maxCount = data->score_count;
	for (int i = 0; i < H * W - 1; i++) {
		int x = i / W, y = i % W;

		for (int j = i + 1; j < H * W; j++) {
			int x_ = j / W, y_ = j % W;

			if (data->table[x][y] == data->table[x_][y_])
				continue;

			int temp = data->table[x][y];
			data->table[x][y] = data->table[x_][y_];
			data->table[x_][y_] = temp;
			int newCountScore = data->cal_countScore();
			if (maxCount <= newCountScore) {
				if (maxCount < newCountScore)
					max_vec.clear();
				maxCount = newCountScore;
				Cell cell;
				cell.x = x; cell.y = y;
				cell.x_ = x_; cell.y_ = y_;
				max_vec.push_back(cell);
			}
			data->table[x_][y_] = data->table[x][y];
			data->table[x][y] = temp;
		}
	}

	if (max_vec.size() == 0) {
		cout << "No change\n";
		return -1;
	}

	Random rand;
	int index = rand.GetInt(0, max_vec.size());
	int x = max_vec[index].x;
	int y = max_vec[index].y;
	int x_ = max_vec[index].x_;
	int y_ = max_vec[index].y_;

	int temp = data->table[x][y];
	data->update(x, y, data->table[x_][y_], x_, y_, temp);

	if (data->score_count == startCount) {
		cout << "Find same Table <" << data->score_count << ">\n";
		return 0;
	}
	else {
		cout << "Find new Table <" << data->score_count << ">\n";
		return 1;
	}
}

int exchange_2_main(Data* data) {
	cout << "exchange_2()::Loading ... ";
	struct Cell {
		int x, y, x_, y_;
	};
	vector<Cell> max_vec;

	int startCount = data->score_main;
	int maxCount = data->score_main;
	for (int i = 0; i < H * W - 1; i++) {
		int x = i / W, y = i % W;

		for (int j = i + 1; j < H * W; j++) {
			int x_ = j / W, y_ = j % W;

			if (data->table[x][y] == data->table[x_][y_])
				continue;

			int temp = data->table[x][y];
			data->table[x][y] = data->table[x_][y_];
			data->table[x_][y_] = temp;
			int newmainScore = data->cal_mainScore();
			if (maxCount <= newmainScore) {
				if (maxCount < newmainScore)
					max_vec.clear();
				maxCount = newmainScore;
				Cell cell;
				cell.x = x; cell.y = y;
				cell.x_ = x_; cell.y_ = y_;
				max_vec.push_back(cell);
			}
			data->table[x_][y_] = data->table[x][y];
			data->table[x][y] = temp;
		}
	}

	if (max_vec.size() == 0) {
		cout << "No change\n";
		return -1;
	}

	Random rand;
	int index = rand.GetInt(0, max_vec.size());
	int x = max_vec[index].x;
	int y = max_vec[index].y;
	int x_ = max_vec[index].x_;
	int y_ = max_vec[index].y_;

	int temp = data->table[x][y];
	data->update(x, y, data->table[x_][y_], x_, y_, temp);

	if (data->score_main == startCount) {
		cout << "Find same Table <" << data->score_main << ">\n";
		return 0;
	}
	else {
		cout << "Find new Table <" << data->score_main << ">\n";
		return 1;
	}
}

void permutation(Data* data) {
	cout << "permutation()::Loading ... ";
	int digit_list[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int maxScore_main = data->score_main;
	int cnt(0);
	do {
		Data ori_data = *data;
		for (int i = 0; i < H; i++)
			for (int j = 0; j < W; j++)
				ori_data.table[i][j] = digit_list[ori_data.table[i][j]];
		int score = ori_data.cal_mainScore();
		if (cnt++ % 3628800 == 0)
			cout << cnt / 3628800 << "---\n";
		if (maxScore_main < score) {
			maxScore_main = score;
			ori_data.update_score();
			for (const auto iter : digit_list)
				cout << iter << " ";
			cout << "\n";
			ori_data.print();
		}
	} while (next_permutation(digit_list, digit_list + 10));
	cout << "end\n";

}



void findMaxCount() {
	Data data;
	data.load();
	data.print();

	int cnt1(0), cnt2(0);
	while (true) {
		int excute1 = set_1_count(&data);

		if (excute1 == -1 || cnt1 >= 20) {
			cnt1 = 0;
			if (cnt2 >= 3)
				break;

			int excute2 = exchange_2_count(&data);

			if (excute2 == -1)
				break;

			if (excute2 == 0)
				cnt2++;

			if (excute2 == 1)
				cnt2 = 0;
		}

		if (excute1 == 0)
			cnt1++;

		if (excute1 == 1)
			cnt2 = 0;
	}

	data.print();
}

void Create_and_AppendDB() {
	DB db;
	db.print_summary();
	while (true) {
		Data data;
		do {
			data.create_count();
		} while (data.score_count <= 9890);
		data.print();

		int cnt1(0), cnt2(0);
		while (true) {
			int excute1 = set_1_count(&data);

			if (excute1 == -1 || cnt1 >= 15) {
				cnt1 = 0;
				if (cnt2 >= 3)
					break;

				int excute2 = exchange_2_count(&data);

				if (excute2 == -1)
					break;

				if (excute2 == 0)
					cnt2++;

				if (excute2 == 1)
					cnt2 = 0;
			}

			if (excute1 == 0)
				cnt1++;

			if (excute1 == 1)
				cnt2 = 0;
		}

		db.append(&data);
		data.print();
		db.print_summary();
	}
}

void findMaxMain() {
	Data data;
	data.load();
	data.print();

	int size = 3;
	int cnt1(0), cnt2(0);
	while (true) {
		int excute1 = set_1_main(&data);

		if (excute1 == -1 || cnt1 >= 15) {
			cnt1 = 0;
			if (cnt2 >= 10)
				break;

			int excute2 = exchange_2_main(&data);

			if (excute2 == -1)
				break;

			if (excute2 == 0)
				cnt2++;

			if (excute2 == 1)
				cnt2 = 0;
		}

		if (excute1 == 0)
			cnt1++;

		if (excute1 == 1)
			cnt2 = 0;
	}

	data.print();
}

void onePermutation() {
	Data data;
	data.load();
	data.print();
	permutation(&data);
}

int main() {

}
