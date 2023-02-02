/*
 *  문제 : 빠른 A+B
 *  날짜 : 2023년 2월 2일 
 */

#include <stdio.h>

int main(void){
    int T, a, b;
    
    scanf("%d", &T);

    for(int i = 0;i < T;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}