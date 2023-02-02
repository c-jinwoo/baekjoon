/*
 *  문제 : A + B - 3
 *  날짜 : 2023년 2월 2일 
 */

#include <stdio.h>

int main(void){
    int n, a, b;

    scanf("%d", &n);

    int* result = (int*)malloc(n * sizeof(int));

    for(int i = 0;i < n;i++){
        scanf("%d %d", &a, &b);
        result[i] = a + b;
    }

    for(int i = 0;i < n;i++){
        printf("%d\n", result[i]);
    }

    free(result);
    
    return 0;
}