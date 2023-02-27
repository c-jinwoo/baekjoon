/*
 *  문제 : 약수들의 합
 *  날짜 : 2023년 2월 27일 
 */

#include <stdio.h>

int main(void){
    int num;

    while(1){
        scanf("%d", &num);

        if(num == -1){
            break;
        }

        int sum = 0;

        for(int i = 1; i < num; i++){
            if(num % i == 0){
                sum += i;
            }
        }

        if(sum == num){
            printf("%d = 1 ", num);

            for(int i = 2; i < num; i++){
                if(num % i == 0){
                    printf("+ %d ", i);
                }
            }            
        }
        else{
            printf("%d is NOT perfect.", num);
        }

        printf("\n");
    }

    return 0;
}