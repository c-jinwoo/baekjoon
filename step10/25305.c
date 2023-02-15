/*
 *  문제 : 커트라인
 *  날짜 : 2023년 2월 16일 
 */

#include <stdio.h>
#define MAX 10000
int main(void){
    int n, k, score, result = -1;
    int dist[MAX] = {0};

    scanf("%d %d", &n, &k);

    for(int i = 0;i <= MAX;i++){
        dist[i] = 0;
    }

    for(int i = 0;i < n;i++){
        scanf("%d", &score);

        dist[score]++;
    }

    for(int i = MAX;i >= 0;i--){
        while(dist[i]){
            dist[i]--;
            k--;

            if(k == 0){
                result = i;
                break;
            }
        }

        if(result != -1){
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}