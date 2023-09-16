#include "Random.h"

Random::Random() : rd((unsigned)std::chrono::steady_clock::now().time_since_epoch().count()) {}

short Random::GetInt(short l, short r) { return std::uniform_int_distribution<short>(l, r - 1)(rd); }
