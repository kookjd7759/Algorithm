#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cards1[], size_t cards1_len,
               const char* cards2[], size_t cards2_len,
               const char* goal[],   size_t goal_len) {
    size_t i = 0, j = 0; // cards1, cards2 포인터

    for (size_t k = 0; k < goal_len; ++k) {
        if (i < cards1_len && strcmp(cards1[i], goal[k]) == 0) {
            ++i;
        } else if (j < cards2_len && strcmp(cards2[j], goal[k]) == 0) {
            ++j;
        } else {
            char *ans = (char*)malloc(3); // "No"
            if (ans) strcpy(ans, "No");
            return ans;
        }
    }

    char *ans = (char*)malloc(4); // "Yes"
    if (ans) strcpy(ans, "Yes");
    return ans;
}
