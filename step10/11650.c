/*
 *  문제 : 좌표 정렬하기
 *  날짜 : 2023년 2월 21일 
 */

#include <stdio.h>
#define MAX 100000

int dot[MAX][2] = {0, };

int main(void){
    int n;
    int min = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &dot[i][0], &dot[i][1]);
    }

    for(int i = 0; i < n; i++){
        min = i;

        for(int j = i + 1; j < n; j++){
            if(dot[min][0] >= dot[j][0]){
                min = j;

                if(dot[min][1] > dot[j][1]){
                    min = j;
                }
            }
        }

        int temp_x = dot[i][0],
            temp_y = dot[i][1];
        
        dot[i][0] = dot[min][0];
        dot[i][1] = dot[min][1];
        dot[min][0] = temp_x;
        dot[min][1] = temp_y;
    }
    
    for(int i = 0; i < n; i++){
        printf("%d %d\n", dot[i][0], dot[i][1]);
    }
    
    return 0;
}