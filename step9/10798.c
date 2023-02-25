/*
 *  문제 : 세로읽기
 *  날짜 : 2023년 2월 26일 
 */

#include <stdio.h>
#define MAX 15

int main(void){
    char str[5][MAX] = {0,};

    for(int i = 0; i < 5; i++){
        scanf("%s", str[i]);
    }

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < 5; j++){
            if(str[j][i] != NULL){
                printf("%c", str[j][i]);
            }
        }
    }
    
	printf("\n");
    
    return 0;
}