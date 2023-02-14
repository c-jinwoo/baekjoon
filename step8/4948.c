/*
 *  문제 : 베르트랑 공준
 *  날짜 : 2023년 2월 15일 
 */

#include <stdio.h>
#define MAX 123456

int main(void){
    int n, nums[MAX * 2] = {0};

    // 에라토스테네스의 체 : 소수 판별
    for(int i = 2;i <= MAX * 2;i++){
        nums[i] = i;
    }

    for(int i = 2;i <= MAX * 2;i++){
        if(!nums[i]){
            continue;
        }

        for(int j = i + i;j <= MAX * 2;j += i){
            nums[j] = 0;
        }
    }

    // 0 입력할 때까지 무한루프
    while(1){
        scanf("%d", &n);

        if(n == 0){
            break;
        }

        int count = 0;

        // n보다 크고 2n까지 작거나 같은 소수 갯수 출력
        for(int i = n + 1;i <= 2 * n;i++){
            if(nums[i]){
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}