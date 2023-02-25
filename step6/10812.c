/*
 *  문제 : 바구니 순서 바꾸기
 *  날짜 : 2023년 2월 26일 
 */

#include <stdio.h>
#define MAX 100

int main(void){
    int num, cnt;
    int basket[MAX] = {0};

    scanf("%d %d", &num, &cnt);

    for(int i = 0; i < num; i++){
        basket[i] = i + 1;
    }
    
    // 1 2 3 4 5 6 7 8 9 10

    for(int i = 0; i < cnt; i++){
        int begin, mid, end;

        scanf("%d %d %d", &begin, &end, &mid);
        
        int num_basket = end - mid + 1;
        int* temp = (int*)malloc(sizeof(int) * num_basket);
        
        for(int j = 0; j < num_basket; j++){
        	temp[j] = basket[j + mid - 1];        	
		}
		
		for(int j = 0; j < mid - begin; j++){
			basket[end - 1 - j] = basket[mid - 1 - j - 1];
		}
		
        for(int j = 0; j < num_basket; j++){
        	basket[begin - 1 + j] = temp[j];
		}        
		
		free(temp);
		temp = NULL;
    }

    for(int i = 0; i < num; i++){
        printf("%d ", basket[i]);
    }

    return 0;
}