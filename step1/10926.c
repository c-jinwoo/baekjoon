/*
 *  문제 : ??!
 *  날짜 : 2023년 1월 31일 
 */

#include <stdio.h>
#include <string.h>
#define MAXLEN 55

int main(void){
    char id[MAXLEN];
	char surprise[4] = "??!";
	
    scanf("%s", id);
    
    strcat(id, surprise);

    printf("%s\n", id);

    return 0;
}