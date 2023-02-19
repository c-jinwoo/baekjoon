/*
 *  문제 : 달팽이는 올라가고 싶다
 *  날짜 : 2023년 2월 19일 
 */

#include <stdio.h>

int main(void){ 
    int a, b, v, h;

    scanf("%d %d %d", &a, &b, &v);

    /* 
        a * h - b * (h - 1) >= v 여야함
        (a - b) * h >= v - b
        따라서 h >= (v - b) / (a - b)
        나눈 나머지가 있다면 하루 더 추가해주면됨
    */

    h = (v - b) / (a - b);

    if((v - b) % (a - b)){
        h++;
    }

    printf("%d\n", h);

    return 0;
}