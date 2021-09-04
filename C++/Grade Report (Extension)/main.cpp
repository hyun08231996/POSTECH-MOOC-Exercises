//
//  main.cpp
//  성적처리 (확장)
//
//  Created by Peter Nam on 2020/12/12.
//

#include <iostream>

int main(void)
{
     int i, stuNum, stuID, stuGrade;
     char grade;
     float total = 0;
     printf("수강 인원을 입력 하세요: ");
     scanf("%d", &stuNum);
     for(i = 0; i < stuNum; i++)
     {        printf("학번과 점수를 입력 하세요: ");
         scanf("%d %d", &stuID, &stuGrade);
         total += stuGrade;
         if (stuGrade >= 90)
             grade = 'A';
         else if (stuGrade >= 80)
             grade = 'B';
         else if (stuGrade >= 70)
             grade = 'C';
         else if (stuGrade >= 60)
             grade = 'D';
         else
             grade = 'F';
         printf("학번: %d, 학점: %c\n", stuID, grade);
     }
     printf("과목평균: %5.2f\n", total/stuNum);
     return 0;
}
