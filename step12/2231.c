/*
 *  문제 : 분해합
 *  날짜 : 2023년 3월 5일 
 */

#include <stdio.h>

int main(void){ 
    int N, num = 1;

    scanf("%d", &N);

    while(num < N){
        int num_cpy = num;              // 자리 수 계산을 위한 값 복사
        int result = num;               // 계산 결과값

        while(num_cpy){
            result += num_cpy % 10;
            num_cpy /= 10;
        }
        
        if(result == N){
            printf("%d\n", num);
            return 0;
        }
        else{
            num++;
        }
    }

    printf("0\n");

    return 0;
}