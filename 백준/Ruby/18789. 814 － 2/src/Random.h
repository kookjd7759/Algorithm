#include <future>
#include <random>

class Random {
	std::mt19937 rd;
public:
	Random();
	short GetInt(short l, short r);
};
