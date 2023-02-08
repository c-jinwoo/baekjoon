/*
 *  문제 : 숫자의 합
 *  날짜 : 2023년 2월 9일 
 */

#include <stdio.h>
#define MAX 100

int main(void){
    int len, sum = 0;
    char num[MAX];

    scanf("%d %s", &len, num);

    for(int i = 0;i < len;i++){
        sum += num[i] - 48;
    }

    printf("%d\n", sum);
    
    return 0;
}