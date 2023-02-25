/*
 *  문제 : 문자열
 *  날짜 : 2023년 2월 25일 
 */

#include <stdio.h>
#define MAX 1000

int main(void){
    int caseNum;

    scanf("%d", &caseNum);

    for(int i = 0; i < caseNum; i++){
        int idx = 0;
        char input[MAX];

        scanf("%s", input);

        while(input[idx] != '\0'){
            if(idx == 0){
                printf("%c", input[idx]);
            }

            idx++;
        }

        printf("%c\n", input[idx - 1]);
    }

    return 0;
}