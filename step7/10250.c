/*
 *  문제 : ACM 호텔
 *  날짜 : 2023년 2월 20일 
 */

#include <stdio.h>

int main(void){ 
    int caseNum;
    int h, w, n;

    scanf("%d", &caseNum);

    for(int i = 0;i < caseNum;i++){
        scanf("%d %d %d", &h, &w, &n);

        int floor = 0, room = 1;
        
        floor = n % h;                  // 배정 층 = 전체 층으로 나눈 나머지
        room += n / h;                  // 배정 호실 = 전체 층으로 나눈 몫만큼 오른쪽 1칸 이동

        printf("%d", floor);
    
        if(room < 10){
            printf("0%d\n", room);
        }
        else{
            printf("%d\n", room);
        }
    }

    return 0;
}