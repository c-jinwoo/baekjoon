/*
 *  문제 : 그룹 단어 체커
 *  날짜 : 2023년 2월 10일 
 */

#include <stdio.h>
#include <string.h>
#define ALPHABET_NUM 26

int main(void){
    int caseNum, result = 0, alphabet_cnt[ALPHABET_NUM] = {0};

    scanf("%d", &caseNum);

    for(int i = 0;i < caseNum;i++){
        char str[101], lastChar;
        int idx = 0;

        scanf("%s", str);

        memset(alphabet_cnt, 0, sizeof(alphabet_cnt));

        while(str[idx] != '\0'){
            if(alphabet_cnt[str[idx] - 97]){
                if(idx != 0){
                    if(lastChar != str[idx]){
                        result++;
                        break;
                    }
                }
            } 
            else{
                alphabet_cnt[str[idx] - 97] = 1;
            }

            lastChar = str[idx];
            idx++;
        }
    }
    
    printf("%d\n", caseNum - result);

    return 0;
}