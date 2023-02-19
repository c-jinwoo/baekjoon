/*
 *  문제 : 설탕 배달
 *  날짜 : 2023년 2월 20일 
 */

#include <stdio.h>

int main(void){ 
    int total, num_5 = -1, num_3 = -1;

    scanf("%d", &total);

    for(int i = total / 5;i >= 0; i--){
        int remain = total - 5 * i;

        if(remain % 3 == 0){
            num_5 = i;
            num_3 = remain / 3;
            break;
        }
    }

    if(num_5 == -1){
        printf("-1\n");
    }
    else{
        printf("%d\n", num_5 + num_3);
    }

    return 0;
}