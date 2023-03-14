/*
 *  문제 : 문자와 문자열
 *  날짜 : 2023년 3월 15일 
 */

#include <stdio.h>
#define SIZE 1001

int main(void){
    char str[SIZE];
    int idx;
    
    scanf("%s %d", str, &idx);
    
    printf("%c\n", str[idx - 1]);
    
    return 0;
}