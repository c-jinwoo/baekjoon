/*
 *  문제 : A + B - 5
 *  날짜 : 2023년 2월 2일 
 */

#include <stdio.h>

int main(void){
    int a, b;
    
    while(1){
        scanf("%d %d", &a, &b);

        if(a == 0 && b == 0){
            break;
        }

        printf("%d\n", a + b);
    }
    
    return 0;
}