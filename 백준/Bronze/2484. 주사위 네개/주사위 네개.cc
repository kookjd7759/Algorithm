#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#pragma warning(disable :4996)
using namespace std;
 
int most_award(int arr[]) {
    int dice[7] = { 0 };
    int count = 0; 
    int a =0;
    
    for (int i = 0; i < 4; i++)
    {
        dice[arr[i]]++;
    }
 
    int max = arr[0];
 
    for (int i = 1; i < 7; i++) {
        if (dice[i] == 4)
            return 50000 + (i * 5000);
        else if (dice[i] == 3)
            return 10000 + (i * 1000);
        else if (dice[i] == 2)
        {
            if (count == 1) { 
                return 2000 + (a * 500) + (i * 500);
            }
                a = i;              
                count++;
        }
        else {
            if (max < arr[i] && i<= 3) max =arr[i];
        }
    }
 
    if (count == 1) { 
        return 1000 + (a * 100);
    }
    else 
        return max * 100;    
}
 
int main(){
    
    int N;
    int result = 0,max =0;
    int arr[5] = { 0 };
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
        result=most_award(arr);
        if (result > max) max = result;
    }
    printf("%d", max);
    return 0;
}
