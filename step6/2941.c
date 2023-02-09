/*
 *  문제 : 크로아티아 알파벳
 *  날짜 : 2023년 2월 10일 
 */

#include <stdio.h>
#define STRLEN 101

int main(void){
    char str[STRLEN];
    int idx = 0, count = 0;

    scanf("%s", str);

    while(str[idx] != '\0'){
        if(str[idx] == 'c' || str[idx] == 's' || str[idx] == 'z'){
            if(str[idx + 1] == '='){
                idx++;
            }
        }
        if(str[idx] == 'c' || str[idx] == 'd'){
            if(str[idx + 1] == '-'){
                idx++;
            }
        }
        if(str[idx] == 'd'){
            if(str[idx + 1] == 'z' && str[idx + 2] == '='){
                idx += 2;
            }
        }
        if(str[idx] == 'l' || str[idx] == 'n'){
            if(str[idx + 1] == 'j'){
                idx++;
            }
        }
        count++;
        idx++;
    }

    printf("%d\n", count);

    return 0;
}