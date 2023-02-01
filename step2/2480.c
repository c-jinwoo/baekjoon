/*
 *  문제 : 주사위 세개
 *  날짜 : 2023년 2월 1일 
 */

#include <stdio.h>

int main(void){
    int a, b, c, result;

    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b){
        if(b == c){
            result = 10000 + a * 1000;  // 같은 눈 3개
        }
        else{
            result = 1000 +  a * 100;   // 같은 눈 2개
        }
    }
    else{
        if(b == c){
            result = 1000 + b * 100;  // 같은 눈 2개
        }
        else if(a == c){
            result = 1000 + a * 100;  // 같은 눈 2개
        }
        else{
            if(a > b){
                if(a > c){
                    result = a * 100;
                }
                else{
                    result = c * 100;
                }
            }
            else{
                if(b > c){
                    result = b * 100;
                }
                else{
                    result = c * 100;
                }
            }
        }
    }

    printf("%d\n", result);
    
    return 0;
}