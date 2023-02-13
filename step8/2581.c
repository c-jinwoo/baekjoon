/*
 *  문제 : 소수
 *  날짜 : 2023년 2월 14일 
 */

#include <stdio.h>
#include <stdbool.h>

int main(void){
    int m, n, min = 0, sum = 0;

    scanf("%d %d", &m, &n);

    for(int i = m;i <= n;i++){
        bool result = true;

        if(i == 1){
            continue;
        }

        for(int j = 2;j < i;j++){
            if(i % j == 0){
                result = false;
                break;
            }
        }

        if(result){
            if(!min){
                min = i;
            }

            sum += i;
        }
    }

    if(sum){
        printf("%d\n%d\n", sum, min);
    }
    else{
        printf("-1\n");
    }

    return 0;
}