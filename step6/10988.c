/*
 *  문제 : 팰린드롬인지 확인하기
 *  날짜 : 2023년 2월 26일 
 */

#include <stdio.h>
#include <string.h>
#define LEN 101

int main(void){
    int idx = 0, len, result = 1;
    char str[LEN];

    scanf("%s", str);

    len = strlen(str);

    for(int i = 0; i < len / 2; i++){
        if(str[i] != str[len - i - 1]){
            result = 0;
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}