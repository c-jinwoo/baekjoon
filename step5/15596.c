/*
 *  문제 : 정수 N개의 합
 *  날짜 : 2023년 2월 7일 
 */

#include <stdio.h>

long long sum(int *a, int n){
    long long sum = 0;

    for(int i = 0;i < n;i++){
        sum += a[i];
    }

    return sum;
}