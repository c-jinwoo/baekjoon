/*
 *  문제 : A + B - 8 
 *  날짜 : 2023년 2월 2일 
 */

#include <stdio.h>

int main(void){
    int T, a, b;
    
    scanf("%d", &T);

    for(int i = 0;i < T;i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
    }

    return 0;
}