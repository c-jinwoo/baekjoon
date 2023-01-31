/*
 *  문제 : 킹, 퀸, 룩, 비숍, 나이트, 폰
 *  날짜 : 2023년 1월 31일 
 */

#include <stdio.h>
#define TYPENUM 6

int main(void){
    const int type[TYPENUM] = {1, 1, 2, 2, 2, 8};
    int current[TYPENUM];

    for(int i = 0;i < TYPENUM;i++){
        scanf("%d", &current[i]);
    }

    for(int i = 0;i < TYPENUM;i++){
        printf("%d ", type[i] - current[i]);
    }

    return 0;
}