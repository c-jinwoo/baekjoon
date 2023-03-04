/*
 *  문제 : 블랙잭
 *  날짜 : 2023년 3월 4일 
 */

#include <stdio.h>
#define CARD_MAX 100

int main(void){ 
    int card_arr[CARD_MAX] = {0}, 
        card_num = 0,
        target,
        sum,
        result = 0;
    
    scanf("%d %d", &card_num, &target);

    for(int i = 0;i < card_num;i++){
        scanf("%d", &card_arr[i]);
    }
    
    for(int i = 0;i < card_num;i++){
        for(int j = i + 1;j < card_num;j++){
            for(int k = j + 1;k < card_num;k++){
            	sum = card_arr[i] + card_arr[j] + card_arr[k];
            	
				if(sum <= target && result < sum){
					result = sum;
				}
            }
        }
    }
    
    printf("%d\n", result);

    return 0;
}