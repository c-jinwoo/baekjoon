/*
 *  문제 : 통계학
 *  날짜 : 2023년 2월 16일 
 */

#include <stdio.h>
#define MAX 500000
#define NUM 4000

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
    int n, num, sum = 0, arr[MAX] = {0};
	int cnt[NUM * 2 + 1] = {0};
	int max = 0, dupl = 0;          // max : 최빈값, dupl : 최빈값 중복 시 계산용
	
    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d", &num);

        arr[i] = num;
		cnt[num + NUM]++;
        sum += num;
    }
	
	// 합병 정렬
    mergeSort(arr, 0, n - 1);
	
    // 카운팅 정렬로 최빈값 계산
    for(int i = 0;i < NUM * 2 + 1;i++){
        if(cnt[max] < cnt[i]){
            max = i;
        }
    }

    for(int i = 0;i < NUM * 2 + 1;i++){
        if(cnt[i] == cnt[max]){
            dupl++;
            
            if(dupl == 2){
                max = i;
                break;
            }
        }
    }	
    max -= NUM;

    // 산술평균 소수점 반올림 계산
    double avg = (double)sum / n;
    int avg2int = (avg >= 0) ? (int)(avg + 0.5) : (int)(avg - 0.5);
	
    printf("%d\n", avg2int);       			// 산술평균
    printf("%d\n", arr[n / 2]);     		// 중앙값
    printf("%d\n", max);     				// 최빈값
    printf("%d\n", arr[n - 1] - arr[0]);    // 범위

    return 0;
}