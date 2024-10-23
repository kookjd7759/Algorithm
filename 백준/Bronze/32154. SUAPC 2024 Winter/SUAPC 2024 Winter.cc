#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define nonecountingTC int tc; in tc; while(tc--) 
#define countingTC int tc; in tc; for (int TCcounter = 1; TCcounter <= tc; TCcounter++) 

using namespace std;

pair<int, uint32_t> score[12];

constexpr uint32_t A = 1;
constexpr uint32_t B = A << 1;
constexpr uint32_t C = B << 1;
constexpr uint32_t D = C << 1;
constexpr uint32_t E = D << 1;
constexpr uint32_t F = E << 1;
constexpr uint32_t G = F << 1;
constexpr uint32_t H = G << 1;
constexpr uint32_t I = H << 1;
constexpr uint32_t J = I << 1;
constexpr uint32_t K = J << 1;
constexpr uint32_t L = K << 1;
constexpr uint32_t M = L << 1;
constexpr uint32_t ALL = 0xFFFFFFFF;

constexpr void init() {
	score[0].first = 11, score[0].second = ALL & ~(I | K);
	score[1].first = 9, score[1].second = ALL & ~(B | D | J | K);
	score[2].first = 9, score[2].second = ALL & ~(B | D | J | K);
	score[3].first = 9, score[3].second = ALL & ~(D | I | J | K);
	score[4].first = 8, score[4].second = ALL & ~(B | D | I | J | K);
	score[5].first = 8, score[5].second = ALL & ~(B | D | I | J | K);
	score[6].first = 8, score[6].second = ALL & ~(B | D | I | J | K);
	score[7].first = 8, score[7].second = ALL & ~(B | D | I | J | K);
	score[8].first = 8, score[8].second = ALL & ~(B | D | I | J | K);
	score[9].first = 8, score[9].second = ALL & ~(D | E | I | J | K);
	score[10].first = 7, score[10].second = ALL & ~(B | D | E | I | J | K);
	score[11].first = 7, score[11].second = ALL & ~(B | D | E | I | J | K);
}
inline void print(uint32_t n) {
	for (uint32_t i = 0; i <= 12; i++)
		if (n & (A << i)) out (char)('A' + i) << ' ';
}

int main() {
	Sync;
	
	init();
	int idx; in idx; idx--;
	out score[idx].first endl;
	print(score[idx].second);

}