/*
 *  문제 : 영화감독 숌
 *  날짜 : 2023년 3월 2일 
 */

#include <stdio.h>
#include <string.h>
#define MAX 10000

int main(void){
    int num = 666, count = 0, n;
    char num2str[MAX] = {0};

    scanf("%d", &n);

    while(count < n){
        int num_cpy = num++;
        int idx = 0;

        // 문자열 초기화
        memset(num2str, 0, strlen(num2str));

        // 숫자 -> 문자열로
        while(num_cpy){
            num2str[idx++] = num_cpy % 10 + 48;
            num_cpy /= 10;  
        }
		
        // 연속된 3자리가 '666'인지 검사하고 맞으면 카운트 증가 후 다음 숫자 진행
        for(int i = 0;i <= strlen(num2str) - 3;i++){
            if(num2str[i] == '6' && num2str[i + 1] == '6' && num2str[i + 2] == '6'){
                count++;
                break;
            }
        }
    }

    printf("%d\n", num - 1);

    return 0;
}