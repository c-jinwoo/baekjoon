/*
 *  문제 : 체스판 다시 칠하기
 *  날짜 : 2023년 2월 28일 
 */

#include <stdio.h>
#define MAX 50
#define SIZE 8

int main(void){
    int n, m, min = SIZE * SIZE;
    int i_x = 0, i_y = 0;
    char board[MAX][MAX];
    char t1[SIZE][SIZE], t2[SIZE][SIZE];
    
    // 비교할 정답테이블 
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(i % 2){
                t1[i][j] = (j % 2) ? 'W' : 'B';
                t2[i][j] = (j % 2) ? 'B' : 'W';
            }
            else{
                t1[i][j] = (j % 2) ? 'B' : 'W';
                t2[i][j] = (j % 2) ? 'W' : 'B';
            }
        }
    }

    scanf("%d %d", &n, &m);

    for(int i = 0;i < n;i++){
    	scanf("%s", &board[i]);
    }
	
	// 비교해서 교체할 최소값 계산 
    for(int x = 0; x <= n - SIZE; x++){
    	for(int y = 0; y <= m - SIZE; y++){
	        int local_min_t1 = 0;
	        int local_min_t2 = 0;
	        
			for(int i = x; i < x + SIZE; i++){
				for(int j = y; j < y + SIZE; j++){
					if(board[i][j] != t1[i - x][j - y]){
                    	local_min_t1++;
					}
					if(board[i][j] != t2[i - x][j - y]){
                    	local_min_t2++;						
					}
				}	
			}
			
	        if(min > local_min_t1){
	            min = local_min_t1;
	        }
	        if(min > local_min_t2){
	            min = local_min_t2;
	        }
		}
	} 
    
    printf("%d\n", min);

    return 0;
}