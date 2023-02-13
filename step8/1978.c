/*
 *  문제 : 소수 찾기
 *  날짜 : 2023년 2월 14일 
 */

#include <stdio.h>
#include <stdbool.h>

int main(void){
    int n, num, count = 0;

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d", &num);
        bool result = true;

        for(int j = 2;j < num;j++){
            if(num % j == 0){
                result = false;
                break;
            }
        }    

        if(result){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}