/*
 *  문제 : 분수찾기
 *  날짜 : 2023년 2월 18일 
 */

#include <stdio.h>

int main(void){
    int x, bunja, bunmo;
    int i = 1, sum = 0, stage = 0;

    scanf("%d", &x);

    while(1){
        sum += i;

        if(x <= sum){
            stage = i;
            break;
        }

        i++;
    }

    // 홀수층 일 경우 1/층, 짝수층 일 경우 층/1 부터 계산 시작
    bunja = (stage % 2) ? 1 : stage;
    bunmo = (stage % 2) ? stage : 1;

    while(sum != x){
        if(stage % 2){
            bunja++;
            bunmo--;
        }
        else{
            bunja--;
            bunmo++;
        }
        sum--;
    }

    printf("%d/%d\n", bunja, bunmo);

    return 0;
}