/*
 *  문제 : 평균은 넘겠지
 *  날짜 : 2023년 2월 6일 
 */

#include <stdio.h>
#define MAX 1000

int main(void){
    int caseNum, studentNum, studentArr[MAX] = {0};

    scanf("%d", &caseNum);                  // 첫 줄 : 테스트 케이스 수

    for(int i = 0;i < caseNum;i++){
        scanf("%d", &studentNum);           // 각 줄 첫 숫자 : 학생 수

        int sum = 0, count = 0;
        double avg = 0.0, ratio = 0.0;

        for(int j = 0;j < studentNum;j++){
            scanf("%d", &studentArr[j]);
            sum += studentArr[j];
        }

        avg = (double)sum / studentNum;     // 각 줄 평균 산출

        for(int j = 0;j < studentNum;j++){
            if(studentArr[j] > avg){
                count++;                    // 각 줄 평균 넘는 사람 수 계산
            }
        }

        ratio = 100 * (double)count / studentNum;

        printf("%.3lf%%\n", ratio);         // 소수점 3자리 까지
    }

    return 0;
}