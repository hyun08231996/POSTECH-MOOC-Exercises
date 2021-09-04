//
//  main.cpp
//  성적처리
//
//  Created by Peter Nam on 2020/12/12.
//

#include <iostream>

int main(void)
{
    int mth=0;
    int eng=0;
    float avg=0;
        printf("수학 점수를 입력하세요: ");
        scanf("%d", &mth);
        printf("영어 점수를 입력하세요: ");
        scanf("%d", &eng);
        avg = (float)(mth+eng)/2;
        printf("평균: %.1f \n", avg);
        if(avg >= 90)
            {printf("학점: A \n");}
        else if(avg >= 80)
            {printf("학점: B \n");}
        else if(avg >=70)
            {printf("학점: C \n");}
        else if(avg >=60)
            {printf("학점: D \n");}
        else
            {printf("학점: F \n");}
        return 0;
}
