/*
 *  문제 : 너의 평점은
 *  날짜 : 2023년 2월 26일 
 */

#include <stdio.h>
#include <string.h>
#define LEN 51

double grade2score(char* grade){
    double score;

    if(!strcmp(grade, "A+")){
        score = 4.5;
    }
    else if(!strcmp(grade, "A0")){
        score = 4.0;
    }
    else if(!strcmp(grade, "B+")){
        score = 3.5;
    }
    else if(!strcmp(grade, "B0")){
        score = 3.0;
    }
    else if(!strcmp(grade, "C+")){
        score = 2.5;
    }
    else if(!strcmp(grade, "C0")){
        score = 2.0;
    }
    else if(!strcmp(grade, "D+")){
        score = 1.5;
    }
    else if(!strcmp(grade, "D0")){
        score = 1.0;
    }
    else if(!strcmp(grade, "F")){
        score = 0.0;
    }

    return score;
}

int main(void){
    double sum_credit = 0, sum_score = 0;

    for(int i = 0; i < 20; i++){
        char subject[LEN];
        double credit;
        char grade[3];

        scanf("%s %lf %s", subject, &credit, grade);

        if(strcmp(grade, "P")){     // P가 아닐 경우에만
            sum_credit += credit;
            sum_score += (credit * grade2score(grade));        
        }
    }

    printf("%lf\n", sum_score / sum_credit);

    return 0;
}