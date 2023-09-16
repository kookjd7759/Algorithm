#include <algorithm>
#include <vector>
#include "Data.h"

bool comp_count(Data& a, Data& b);

class DB {
	const int DB_SIZE = 60;
	std::string Path = "(FILEPATH)";
	std::string Path_output = "(FILEPATH)";
	std::vector<Data> vec_DB;

	void load();
	int Max_mainScore();
	int Min_mainScore();
	int Max_countScore();
	int Min_countScore();
	double Average_mainScore();
	double Average_countScore();

public:
	DB() { load(); };
	int get_size() { return vec_DB.size(); }
	double get_averageMain() { return Average_mainScore(); }
	double get_averageCount() { return Average_countScore(); }
	Data get_data(int n) { return vec_DB[n]; }
	void sort_DB() { std::sort(vec_DB.begin(), vec_DB.end(), comp_count); }
	void save();
	bool append(Data* data);
	void set_data(Data* data, int index);
	void print_data();
	void print_summary();
};
