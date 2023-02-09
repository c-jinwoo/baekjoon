/*
 *  문제 : 단어의 개수
 *  날짜 : 2023년 2월 10일 
 */

#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main(void){
    char str[MAX];
    int count = 0, len;
    
    scanf("%[^\n]", str);

    len = strlen(str);

    if(len == 1){
		if(str[0] == ' '){
        	printf("0\n");
        	return 0;
        }
    }

    for(int i = 1;i < len - 1;i++){
        if(str[i] == ' '){
            count++;
        }
    }

    printf("%d\n", count + 1);

    return 0;
}