#include "DB.h"

bool comp_count(Data& a, Data& b) {
	if (a.score_count == b.score_count)
		return a.score_main > b.score_main;
	else
		return a.score_count > b.score_count;
}



void DB::load() {
	std::cout << "Reading DB ..\n";
	vec_DB.clear();

	std::ifstream fin(Path);
	if (!fin.is_open()) {
		std::cout << "ERROR::I can't find the file\n";
		exit(0);
	}
	std::string line;

	getline(fin, line); // Read size
	int size = std::stoi(line);
	if (size > DB_SIZE) {
		std::cout << "ERROR::DB Size is over 60\n";
		exit(0);
	}

	for (int i = 0; i < size; i++) { // Read One Data
		Data data;
		int table[H][W];
		for (int j = 0; j < H; j++) { // Board Part
			getline(fin, line);

			if (line.size() < 8) {
				std::cout << "ERROR::DB table is not available\n";
				exit(0);
			}

			for (int k = 0; k < W; k++)
				table[j][k] = line[k] - 48;
		}

		data.set(table);

		getline(fin, line);
		if (std::to_string(data.score_main) != line)
			std::cout << i + 1 << "th Data in DB.txt, the main score is not available\n";

		getline(fin, line);
		if (std::to_string(data.score_count) != line)
			std::cout << i + 1 << "th Data in DB.txt, the count score is not available\n";

		vec_DB.push_back(data); // Push Data
	}
	fin.close();
	std::cout << "Reading Complete !\n";
}

int DB::Max_mainScore() {
	if (!vec_DB.size())
		return 0;
	int max = vec_DB[0].score_main;
	for (int i = 1; i < vec_DB.size(); i++)
		max = std::max(max, vec_DB[i].score_main);
	return max;
}

int DB::Min_mainScore() {
	if (!vec_DB.size())
		return 0;
	int min = vec_DB[0].score_main;
	for (int i = 1; i < vec_DB.size(); i++)
		min = std::min(min, vec_DB[i].score_main);
	return min;
}

int DB::Max_countScore() {
	if (!vec_DB.size())
		return 0;
	return vec_DB[0].score_count;
}

int DB::Min_countScore() {
	if (!vec_DB.size())
		return 0;
	return vec_DB[vec_DB.size() - 1].score_count;
}

double DB::Average_mainScore() {
	if (!vec_DB.size())
		return 0;
	int sum(0);
	for (int i = 0; i < vec_DB.size(); i++) 
		sum += vec_DB[i].score_main;
	return sum / (double)vec_DB.size();
}

double DB::Average_countScore() {
	if (!vec_DB.size())
		return 0;
	int sum(0);
	for (int i = 0; i < vec_DB.size(); i++)
		sum += vec_DB[i].score_count;
	return sum / (double)vec_DB.size();
}



void DB::save() {
	std::cout << "Saving DB ..\n";
	std::ofstream file(Path);

	if (!file.is_open()) {
		std::cout << "ERROR::I can't find the file\n";
		exit(0);
	}

	if (!vec_DB.size())
		file << 0;
	else {
		file << vec_DB.size() << "\n";
		for (int i = 0; i < vec_DB.size(); i++) {
			for (int j = 0; j < H; j++) {
				for (int k = 0; k < W; k++)
					file << vec_DB[i].table[j][k];
				file << "\n";
			}
			file << vec_DB[i].score_main << "\n";
			file << vec_DB[i].score_count << "\n";
		}
	}
	file.close();
	std::cout << "Saving Complete !\n";
}

bool DB::append(Data* data) {
	if (Min_countScore() > data->score_count) {
		std::cout << "Data is not Appended to DB\n";
		return false;
	}
	vec_DB.push_back(*data);
	sort_DB();
	while (vec_DB.size() > DB_SIZE) 
		vec_DB.pop_back();
	save();
	std::cout << "Append Data to DB\n";
	return true;
}

void DB::set_data(Data* data, int index) {
	vec_DB[index] = *data;
	save();
}

void DB::print_data() {
	if (!vec_DB.size())
		std::cout << "DB is NULL\n";
	for (int i = 0; i < vec_DB.size(); i++) { // print One Data
		std::cout << i + 1 << ")\n";
		vec_DB[i].print();
	}
}

void DB::print_summary() {
	std::cout << "|[DB summary]\n";
	if (DB::vec_DB.size() == 0)  // DB is NULL
		std::cout << "| DB is NULL\n";
	else { // DB is not NULL
		int summary_list_1[5]; // size, max_main, min_main, max_count, min_count
		summary_list_1[0] = vec_DB.size();
		summary_list_1[1] = Max_mainScore();
		summary_list_1[2] = Min_mainScore();
		summary_list_1[3] = Max_countScore();
		summary_list_1[4] = Min_countScore();

		double summary_list_2[2]; // main_average, count_average
		summary_list_2[0] = Average_mainScore();
		summary_list_2[1] = Average_countScore();

		std::cout << "| DB size : " << summary_list_1[0] << "\n";
		std::cout << "| Max Main Score : " << summary_list_1[1]
			<< ", Min Main Score : " << summary_list_1[2] << "\n";
		std::cout << "| Max Count Score : " << summary_list_1[3]
			<< ", Min Count Score : " << summary_list_1[4] << "\n";
		std::cout << "| Main Score Average : " << summary_list_2[0]
			<< ", Count Score Average : " << summary_list_2[1] << "\n";
	}
}
