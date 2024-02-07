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
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int f_DNA[5], m_DNA[5];
    Fori(5) {
        char d1, d2; in d1 >> d2;
        bool upper1 = isupper(d1);
        bool upper2 = isupper(d2);
        if (upper1 && upper2) f_DNA[i] = 1;
        else if (!upper1 && !upper2) f_DNA[i] = -1;
        else f_DNA[i] = 0;
    }
    Fori(5) {
        char d1, d2; in d1 >> d2;
        bool upper1 = isupper(d1);
        bool upper2 = isupper(d2);
        if (upper1 && upper2) m_DNA[i] = 1;
        else if (!upper1 && !upper2) m_DNA[i] = -1;
        else m_DNA[i] = 0;
    }
    
    Testcase{

    string DNA; in DNA;
    bool ch = true;
    Fori(5) {
        if (isupper(DNA[i])) {
            if (f_DNA[i] == -1 && m_DNA[i] == -1) {
                ch = false;
                break;
            }
        }
        else {
            if (f_DNA[i] == 1 || m_DNA[i] == 1) {
                ch = false;
                break;
            }
        }
    }
    out(ch ? "Possible baby." : "Not their baby!") endl;

    };
}