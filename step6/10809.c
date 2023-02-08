/*
 *  문제 : 알파벳 찾기
 *  날짜 : 2023년 2월 9일 
 */

#include <stdio.h>
#include <string.h>
#define ALPHABET_NUM 26
#define STRLEN 100

int main(void){
    char str[STRLEN];
    int idx = 0, alphabet[ALPHABET_NUM] = {0};

    memset(alphabet, -1, sizeof(alphabet));         // -1로 초기화

    scanf("%s", &str);

    while(str[idx] != '\0'){
        if(alphabet[str[idx] - 97] == -1){
            alphabet[str[idx] - 97] = idx;          // -1일 때만 인덱스 업데이트
        }

        idx++;
    }

    for(int i = 0;i < ALPHABET_NUM;i++){
        printf("%d ", alphabet[i]);
    }
    
    return 0;
}