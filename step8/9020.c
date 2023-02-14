/*
 *  문제 : 골드바흐의 추측
 *  날짜 : 2023년 2월 15일 
 */

#include <stdio.h>
#define MAX 10000

int main(void){
    int caseNum, n, nums[MAX] = {0};
    
    // 에라토스테네스의 체 : 소수 판별
    for(int i = 2;i <= MAX;i++){
        nums[i] = i;
    }

    for(int i = 2;i <= MAX;i++){
        if(!nums[i]){
            continue;
        }

        for(int j = i + i;j <= MAX;j += i){
            nums[j] = 0;
        }
    }

    // 테스트 케이스 입력
    scanf("%d", &caseNum);

    for(int i = 0;i < caseNum;i++){
        scanf("%d", &n);

        // 중간값부터 소수 2개의 합 여부 확인 및 출력
        for(int j = n / 2;j < n;j++){
            if(nums[j] && nums[n - j]){
                printf("%d %d\n", n - j, j);
                break;
            }
        }
    }

    return 0;
}