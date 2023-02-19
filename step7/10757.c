/*
 *  문제 : 큰 수 A+B
 *  날짜 : 2023년 2월 20일 
 */

#include <stdio.h>
#include <string.h>
#define MAX 10001

int main(void){
    char A[MAX], B[MAX];
    char result[MAX + 1];

    scanf("%s %s", A, B);

    int len_a = strlen(A),
        len_b = strlen(B),
        len_result = (len_a > len_b) ? len_a : len_b,
        carry = 0,
        digit = 0;

	// 자리수가 높은 숫자 기준으로 한 자리씩 계산
	// 다음 자리수 올림까지 계산 
    for(int i = 0;i < len_result;i++){
    	int num_a = (A[len_a - i - 1] != NULL) ? (A[len_a - i - 1] - 48) : 0;
    	int num_b = (B[len_b - i - 1] != NULL) ? (B[len_b - i - 1] - 48) : 0;
    	
        digit = num_a + num_b;
        
        if(carry){
        	digit++;
		}
         
        carry = digit / 10;
		result[i] = digit % 10 + 48;
    }  
    
    // 마지막 자리에서 자리수 올림이 있으면 그 다음 자리수 1로 고정 
    if(carry){
    	result[len_result++] = '1';	
	}
	
	for(int i = 0;i < len_result; i++){
		printf("%c", result[len_result - i - 1]);	
	}
	
	printf("\n");

    return 0;
}