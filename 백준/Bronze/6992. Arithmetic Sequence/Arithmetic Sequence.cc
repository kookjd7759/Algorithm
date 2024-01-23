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

string arrPrint(int* arr, int size) {
    string ret = "[";
    Fori(size) {
        ret += to_string(arr[i]);
        if (i != size - 1)
            ret += ", ";
    }
    ret += "]";
    return ret;
}

int main() {
    Sync;

    Testcase{
    int n; in n;
    int* arr = new int[n];
    Fori(n) in arr[i];

    bool ch = true;
    int d = arr[1] - arr[0];
    Fori(n - 1) if (arr[i + 1] - arr[i] != d) {
        ch = false;
        break;
    }

    if (ch) {
        int nextArr[5]; nextArr[0] = arr[n - 1] + d;
        For1i(4) nextArr[i] = nextArr[i - 1] + d;
        out "The next 5 numbers after " << arrPrint(arr, n) << " are: " << arrPrint(nextArr, 5) endl;
    }
    else
        out "The sequence " << arrPrint(arr, n) << " is not an arithmetic sequence." endl;
    }
}