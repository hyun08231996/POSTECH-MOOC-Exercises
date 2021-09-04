//
//  main.cpp
//  성적처리 (파일 입출력)
//
//  Created by Peter Nam on 2020/12/14.
//

#include <iostream>

int getStu(FILE* spStu, int *stuID, int *exam1, int *exam2, int *efinal);
void calcGrade(int exam1, int exam2, int efinal, float *avg, char *grade);
void writeStu(FILE* spGrades, int stuID, int avg, char grade);

int main(void)
{
    FILE* spStu; //input.txt 입력파일의 주소를 저장할 포인터 변수
    FILE* spGrades; //output.txt 출력파일의 주소를 저장할 포인터 변수
    
    int stuID, exam1, exam2, efinal; //학번, 과제1, 과제2, 기말
    float avg; //평균
    char grade; //학점
    printf("Begin student grading\n");
    
    if (!(spStu = fopen("input.txt", "r"))) //읽기모드 열기 "r"
    {   printf("Error opening student file\n"); //에러처리
        return 100;
    }
    if (!(spGrades = fopen("output.txt", "w"))) //쓰기모드 열기 "w"
    {   printf("Error opending grades file\n");
        return 102;
        
    }
    while(getStu(spStu, &stuID, &exam1, &exam2, &efinal))
    {
        calcGrade(exam1, exam2, efinal, &avg, &grade);
        writeStu(spGrades, stuID, avg, grade);
    } //while
    
    fclose(spStu); //연결된 파일 포인터 변수 닫기
    fclose(spGrades);
    printf("End student grading\n");
    return 0;
}

int getStu(FILE* spStu, int *stuID, int *exam1, int *exam2, int *efinal)
{
    int ioResult; //입력데이터 에러여부 확인용 변수
    ioResult = fscanf(spStu, "%d%d%d%d", stuID, exam1, exam2, efinal); //데이터를 파일로부터 입력 받아 main 영역 변수에 저장
    if (ioResult == EOF) //End of File : 파일의 끝 확인
        return 0;
    else if (ioResult != 4) //데이터가 4개가 아니면 에러처리
        {   printf("Error reading data\n");
            return 0;
        } //파일 데이터가 끝났거나 개수가 다른경우 0 값 리턴
    else
        return 1;
} //getStu

void calcGrade(int exam1, int exam2, int efinal, float *avg, char *grade)
{
    *avg = (exam1 + exam2 + efinal) / 3;
    
    if (*avg >= 90) //평균값을 사용하여 학점 계산
        *grade = 'A';
    else if (*avg >= 80)
        *grade = 'B';
    else if (*avg >= 70)
        *grade = 'C';
    else if (*avg >= 60)
        *grade = 'D';
    else
        *grade = 'F';
}

void writeStu(FILE* spGrades, int stuID, int avg, char grade)
{
    fprintf(spGrades, "%04d %d %c\n", stuID, avg, grade);
    //output.txt 파일로 실행 결과 직접 출력, 모니터에는 나오지 않음
}
