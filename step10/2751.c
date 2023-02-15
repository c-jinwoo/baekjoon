/*
 *  문제 : 수 정렬하기 2
 *  날짜 : 2023년 2월 16일 
 */

#include <stdio.h>
#define MAX 1000000

void merge(int* arr, int left, int mid, int right){
    int result[MAX];
    int x = left,
        y = mid + 1,
        z = left;

    // 교차로 채우는 경우
    while(x <= mid && y <= right){
        result[z++] = (arr[x] <= arr[y]) ? arr[x++] : arr[y++];
    }

    // 교차가 아니고 나머지를 전부 한번에 채우는 경우
    if(x > mid){
        for(int i = y;i <= right;i++){
            result[z++] = arr[i];
        }
    }
    else{
        for(int i = x;i <= mid;i++){
            result[z++] = arr[i];
        }
    }

    for(int i = left;i <= right;i++){
        arr[i] = result[i];
    }
}

void mergeSort(int* arr, int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main(void){
    int n, arr[MAX] = {0};

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d", &arr[i]);
    }

    // 합병 정렬 시작
    mergeSort(arr, 0, n - 1);

    for(int i = 0;i < n;i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}