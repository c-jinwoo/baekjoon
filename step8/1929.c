/*
 *  문제 : 소수 구하기
 *  날짜 : 2023년 2월 15일 
 */

#include <stdio.h>
#define MAX 1000000

int main(void){
    int m, n, nums[MAX] = {0};

    scanf("%d %d", &m, &n);

    // 에라토스테네스의 체 : 소수 판별
    for(int i = 2;i <= MAX;i++){
        nums[i] = i;
    }

    for(int i = 2;i <= MAX;i++){
        if(!nums[i]){
            continue;
        }

        for(int j = i + i;j <= MAX;j += i){
            nums[j] = 0;
        }
    }

    for(int i = m;i <= n;i++){
        if(nums[i]){
            printf("%d\n", i);
        }
    }

    return 0;
}