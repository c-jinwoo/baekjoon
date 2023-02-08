/*
 *  문제 : 문자열 반복
 *  날짜 : 2023년 2월 9일 
 */

#include <stdio.h>
#include <string.h>

int main(void){
    int caseNum;

    scanf("%d", &caseNum);

    for(int i = 0;i < caseNum;i++){
        int repeatNum;
        char str[21], result[168];

        scanf("%d %s", &repeatNum, str);

        for(int j = 0;j < strlen(str);j++){
            for(int k = 0;k < repeatNum;k++){
                result[j * repeatNum + k] = str[j];
            }
        }

        result[strlen(str) * repeatNum] = '\0';

        printf("%s\n", result);
    }

    return 0;
}