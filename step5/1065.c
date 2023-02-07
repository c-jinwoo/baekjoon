/*
 *  문제 : 한수
 *  날짜 : 2023년 2월 8일 
 */

#include <stdio.h>
#include <stdbool.h>
#define MAX_DIGIT 4

int main(void){
    int n, count;

    scanf("%d", &n);

    if(n < 100){
        count = n;                          // 99이하일때는 해당 숫자
    }
    else{
        count = 99;

        for(int i = 100;i <= n;i++){
            int num = i;
            int digit = 0;
            int digit_arr[MAX_DIGIT] = {0};

            while(num / 10){
                digit_arr[digit++] = num % 10;
                num /= 10;
            }
            digit_arr[digit++] = num % 10;  // 각 자리 수 배열에 입력

            int gap = digit_arr[1] - digit_arr[0];
            bool isArith = true;

            for(int j = 2;j < digit;j++){
                if(digit_arr[j] - digit_arr[j - 1] != gap){
                    isArith = false;
                    break;
                }
            }

            if(isArith){
                count++;                    // 등차 수열이면 카운트
            }
        }
    }

    printf("%d\n", count);

    return 0;
}