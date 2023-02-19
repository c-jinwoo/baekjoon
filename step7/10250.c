/*
 *  문제 : ACM 호텔
 *  날짜 : 2023년 2월 19일 
 */

#include <stdio.h>

int main(void){ 
    int caseNum;
    int h, w, n;

    scanf("%d", &caseNum);

    for(int i = 0;i < caseNum;i++){
        scanf("%d %d %d", &h, &w, &n);

        int floor = 0, room = 1;
        
		floor = (n - 1) % h + 1;
		room += (n - 1) / h;
	
        printf("%d%02d\n", floor, room);
    }

    return 0;
}