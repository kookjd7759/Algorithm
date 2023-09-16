#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include "Random.h"

#define H 8
#define W 14

class Data {
	std::string Path = "(FILEPATH)";
	bool counting[10000];

	struct Check {
		std::set<int> list;
		bool check = false;;
	};
	std::vector<Check> checkList = *new std::vector<Check>(9000);

	void set_CheckList() {
		int board[15][4] = {
			0, 1, 0, 1,
			0, 1, 2, 1,
			1, 0, 1, 0,
			1, 0, 1, 2,
			1, 2, 1, 0,
			1, 2, 1, 2,
			1, 2, 3, 2,
			2, 1, 0, 1,
			2, 1, 2, 1,
			2, 1, 2, 3,
			2, 3, 2, 1,
			2, 3, 2, 3,
			3, 2, 1, 0,
			3, 2, 1, 2,
			3, 2, 3, 2,
		};

		auto Concat = [&](char num1, char num2, char num3, char num4) {
			return (num1 - 48) * 1000 + (num2 - 48) * 100 + (num3 - 48) * 10 + (num4 - 48);
			};

		auto OneCheck = [&](std::string st, int checkNum, int i_1, int i_2, int i_3, int i_4) {
			int temp = Concat(st[i_1], st[i_2], st[i_3], st[i_4]);
			if (temp > checkNum)
				return temp;
			else
				return -1;
			};

		for (int i = 0; i < checkList.size(); i++) {
			int checkNum = 1000 + i;
			std::string st = std::to_string(checkNum);
			for (int j = 0; j < 15; j++) {
				int checking = OneCheck(st, checkNum, board[j][0], board[j][1], board[j][2], board[j][3]);
				if (checking != -1)
					checkList[i].list.insert(checking);
			}
		}
	}

	bool Check_func(int n);
	std::pair<int, int> get_twoScore(); // first : main, second : count
	
	bool CreateBoard_inner(int digit);

public:
	int table[8][14];
	int score_main = 0;
	int score_count = 0;
	int cal_mainScore();
	int cal_countScore();

	Data() { 
		std::memset(table, 0, sizeof(table)); 
		std::memset(counting, false, sizeof(counting));
		set_CheckList();
	}
	void print();
	void load();
	void create_random();
	void update(int i, int j, int num);
	void update(int i, int j, int num, int i_, int j_, int num_);
	void update_score();
	inline void update_mainScore();
	inline void update_countScore();
	void set(int(*new_table)[W]);

	void create_count();
};
