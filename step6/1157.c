/*
 *  문제 : 단어 공부
 *  날짜 : 2023년 2월 9일 
 */

#include <stdio.h>
#include <string.h>
#define ALPHABET_NUM 26
#define STRLEN 1000000

int main(void){
    int idx = 0, alphabet[ALPHABET_NUM] = {0};
    char str[STRLEN];

    scanf("%s", str);

    // 소문자 : 97, 대문자 : 65 에 맞게 오프셋을 빼서 빈도 증가
    while(str[idx] != '\0'){
        if(str[idx] < 97){
            alphabet[str[idx] - 65]++;
        }
        else{
            alphabet[str[idx] - 97]++;
        }

        idx++;
    }
	
    int max = 0, duplCnt = 0;

    // 같으면 dupl 증가, 더 크면 max 값 재설정 및 dupl 초기화
    for(int i = 1;i < ALPHABET_NUM;i++){
        if(alphabet[max] < alphabet[i]){
            max = i;
            duplCnt = 0;
        }
        else if(alphabet[max] == alphabet[i]){
            duplCnt++;
        }
    }

    if(duplCnt > 0){
        printf("?\n");
    }
    else{
        printf("%c\n", max + 65);
    }

    return 0;
}