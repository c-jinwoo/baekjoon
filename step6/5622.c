/*
 *  문제 : 다이얼
 *  날짜 : 2023년 2월 10일 
 */

#include <stdio.h>
#include <string.h>
#define STRLEN 16

int main(void){
    char str[STRLEN];
    int idx = 0, total = 0;

    scanf("%s", str);

    while(str[idx] != '\0'){
        int num = str[idx] - 65, time;

        if(0 <= num && num <= 2){
            time = 3;    
        }
        else if(3 <= num && num <= 5){
            time = 4;
        }
        else if(6 <= num && num <= 8){
            time = 5;
        }
        else if(9 <= num && num <= 11){
            time = 6;
        }
        else if(12 <= num && num <= 14){
            time = 7;
        }
        else if(15 <= num && num <= 18){
            time = 8;
        }
        else if(19 <= num && num <= 21){
            time = 9;
        }
        else{
            time = 10;
        }
        
        total += time;
        idx++;
    }

    printf("%d\n", total);

    return 0;
}