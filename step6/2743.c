/*
 *  문제 : 단어 길이 재기
 *  날짜 : 2023년 2월 25일 
 */

#include <stdio.h>
#define MAX 100

int main(void){
    int cnt = 0;
    char input[MAX];

    scanf("%s", input);

    while(input[cnt] != '\0'){
        cnt++;
    }

    printf("%d\n", cnt);
    
    return 0;
}