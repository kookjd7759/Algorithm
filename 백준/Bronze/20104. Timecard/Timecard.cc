#include <bits/stdc++.h>
#include "timecard.h"

static int N;

void init(int n) {
    N = n;
}

std::string convert(std::string st) {
    for (int i = 0; i < st.size(); i++)
        st[i] = tolower(st[i]);
    return st;
}