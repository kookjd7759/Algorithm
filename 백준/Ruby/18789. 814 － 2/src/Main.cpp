#include <ctime>
#include "DB.h"

using namespace std;

void change_random_n(Data* data, int n) {	
	// 임의의 n개의 칸을 선택해 임의의 숫자로 바꿈
}

int set_1_count(Data* data) {
	/*
	* 값을 한 개만 바꿔서 count 점수가 높아지는 경우 그 중 가장 점수가 높은 데이터 선택
	* 그런 데이터가 없는 경우 같은 점수를 갖는 데이터 선택
	* */
}

int set_1_main(Data* data) {
	/*
	* 값을 한 개만 바꿔서 main 점수가 높아지는 경우 그 중 가장 점수가 높은 데이터 선택
	* 그런 데이터가 없는 경우 같은 점수를 갖는 데이터 선택
	* */
}

int set_2_count(Data* data) {
	/*
	* 값을 두 개 바꿔서 count 점수가 높아지는 경우 그 중 가장 점수가 높은 데이터 선택
	* 그런 데이터가 없는 경우 같은 점수를 갖는 데이터 선택
	* */
}

int set_2_main(Data* data) {
	/*
	* 값을 두 개 바꿔서 main 점수가 높아지는 경우 그 중 가장 점수가 높은 데이터 선택
	* 그런 데이터가 없는 경우 같은 점수를 갖는 데이터 선택
	* */
}

int exchange_2_count(Data* data) {
	/*
	* 두 원소를 교환해 count 점수가 높아지는 경우 그 중 가장 점수가 높은 데이터 선택
	* 그런 데이터가 없는 경우 같은 점수를 갖는 데이터 선택
	* */
}

int exchange_2_main(Data* data) {
	/*
	* 두 원소를 교환해 main 점수가 높아지는 경우 그 중 가장 점수가 높은 데이터 선택
	* 그런 데이터가 없는 경우 같은 점수를 갖는 데이터 선택
	* */
}

void permutation(Data* data) {
	/*
	* 0부터 9까지의 숫자가 한 번씩 등장하는 순열 p0, p1, ... p9를 만든다.
	* 데이터의 각 숫자에 대해 k를 pk로 바꾼다.
	* [출처] [BOJ 18789] 814 - 2 (수정: 2023-09-12)|작성자 Lemonade255
	* */
}



void findMaxCount() {
	/*
	* Data::load()
	* set_1_count() 실행
	* 일정한 횟수 내에 최고 점수가 갱신되지 않았을 경우 exchange_2_count() 실행
	* 앞의 과정 반복, 일정 횟수 내에 최고 점수가 갱신되지 않은 경우 출력
	* */
}

void Create_and_AppendDB() {
	/*
	* Data::create_count()
	* set_1_count() 실행
	* 일정한 횟수 내에 최고 점수가 갱신되지 않았을 경우 exchange_2_count() 실행
	* 앞의 과정 반복, 일정 횟수 내에 최고 점수가 갱신되지 않은 경우 DB에 추가
	* */
}

void findMaxMain() {
	/*
	* Data::load()
	* set_1_count() 실행
	* 일정한 횟수 내에 최고 점수가 갱신되지 않았을 경우 exchange_2_count() 실행
	* 앞의 과정 반복, 일정 횟수 내에 최고 점수가 갱신되지 않은 경우 출력
	* */
}

void onePermutation() {
	Data data;
	data.load();
	data.print();
	permutation(&data);
}

int main() {
	/*
	* 위 함수를 적절히 조화하여 달성
	* */
}
