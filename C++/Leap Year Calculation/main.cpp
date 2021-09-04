//
//  main.cpp
//  윤년계산
//
//  Created by Peter Nam on 2020/12/12.
//

#include <iostream>

int main(void)
{
    int year = 0, month = 0, maxDay = 0;
    printf("Please enter the year: ");
    scanf("%d", &year);
    printf("Please enther the month: ");
    scanf("%d", &month);
    switch(month)
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
            maxDay = 31;
            printf("The last day of the month %d of year %d is %d. \n", month, year, maxDay);
            break;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            maxDay = 30;
            printf("The last day of the month %d of year %d is %d. \n", month, year, maxDay);
            break;
        case 2 :
            if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
            {
                maxDay = 29;
                printf("The last day of the month %d of year %d is %d. \n", month, year, maxDay);
                break;
            }
            else
            {
                maxDay = 28;
                printf("The last day of the month %d of year %d is %d. \n", month, year, maxDay);
                break;
            }
        default:
            printf("Numbers are invalid");
    }
    return 0;
}
