#include "aplusb.h"

static std::vector<int> A_, B_;

void initialize(std::vector<int> A, std::vector<int> B) {
  A_ = std::move(A);
  B_ = std::move(B);
  return;
}

int answer_question(int i, int j) {
  return A_[i] + B_[j];
}
