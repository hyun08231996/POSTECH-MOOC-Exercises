//
//  main.cpp
//  성적 처리 (구조체 배열)
//
//  Created by Peter Nam on 2020/12/14.
//

#include <iostream>
#define MAX 5

struct stu //구조체 정의(사용자 정의 자료형 만들기
{
    int ID;
    float kor, eng, math;
    float avg;
    char grade;
};
typedef struct stu stu; //타입이름 변경

int main(void)
{
    FILE* spStu; //input.txt 입력파일의 주소를 저장할 포인터 변수
    FILE* spGrades; //output.txt 출력파일의 주소를 저장할 포인터 변수
    
    stu s[MAX]; //구조체 변수 (배열) 선언
    int i, korsum = 0, engsum = 0, mathsum = 0; //변수 선언
    
    if (!(spStu = fopen("input.txt", "r"))) //읽기모드 열기 "r"
    {   printf("Error opening student file\n"); //에러처리
        return 100;
    }
    if (!(spGrades = fopen("output.txt", "w"))) //쓰기모드 열기 "w"
    {   printf("Error opending grades file\n");
        return 102;
        
    }
    for(i=0; i<MAX; i++)
    {
        int ioResult; //입력데이터 에러여부 확인용 변수
        ioResult = fscanf(spStu, "%d %f %f %f", &s[i].ID, &s[i].kor, &s[i].eng, &s[i].math);
    }
    for(i=0; i<MAX; i++)
    {
        s[i].avg = (s[i].kor + s[i].eng + s[i].math)/3.0; //평균 계산
        korsum += s[i].kor;
        engsum += s[i].eng;
        mathsum += s[i].math;
    }
    for(i=0; i<MAX; i++)
    {
        if(s[i].avg >= 90)
            s[i].grade = 'A';
        else if(s[i].avg >= 80)
            s[i].grade = 'B';
        else if(s[i].avg >= 70)
            s[i].grade = 'C';
        else if(s[i].avg >= 60)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }
    fprintf(spGrades, "** 성적 **\n");
    for(i=0; i<MAX; i++)
    {
        fprintf(spGrades, "학번: %5d\t평균: %5.2f\t학점: %c\n", s[i].ID, s[i].avg, s[i].grade);
    }
    fprintf(spGrades, "** 과목별 평균 **\n");
    fprintf(spGrades, "국어: %5.2f\t영어: %5.2f\t수학: %5.2f\n", korsum/5.0, engsum/5.0, mathsum/5.0);

    fclose(spStu); //연결된 파일 포인터 변수 닫기
    fclose(spGrades);
    return 0;
}

