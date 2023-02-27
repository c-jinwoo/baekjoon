/*
 *  문제 : 약수 구하기
 *  날짜 : 2023년 2월 27일 
 */

#include <stdio.h>

int main(void){
    int num, cnt, idx = 0;

    scanf("%d %d", &num, &cnt);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            idx++;
        }

        if(cnt == idx){
            printf("%d\n", i);
            break;
        }
    }

    if(cnt > idx){
        printf("0\n");
    }
    
    return 0;
}