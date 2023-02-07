/*
 *  문제 : OX퀴즈
 *  날짜 : 2023년 2월 6일 
 */

#include <stdio.h>
#include <string.h>
#define MAX 80

int main(void){
    int n, score = 0, combo = 0;
    char str[MAX];

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%s", str);
        
        for(int j = 0;j < strlen(str);j++){
            if(str[j] == 'O'){
                combo++;
                score += combo;
            }    
            else{
                combo = 0;
            }
        }
        
        printf("%d\n", score);

        score = 0;
        combo = 0;
    }

    return 0;
}