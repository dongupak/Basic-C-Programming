//
//  main.c
//  04_get_row_avg
//
//  Created by DongGyu Park on 2018. 1. 9..
//  Copyright © 2018년 ProfPark. All rights reserved.
//

#include <stdio.h>

#define ROWS    3
#define COLS    3

int m[ROWS][COLS] = {{10,20,30},
    {40,50,60},
    {70,80,90}
};

double get_row_avg(int m[][COLS], int r)
{
    int *p, *endp;
    double sum = 0.0, avg;
    
    p = &m[r][0]; // r행의 시작주소
    endp = &m[r][COLS-1]; // r행의 종료주소
    while (p<=endp) // p가 endp보다 작거나 같으면
        sum += *p++; //sum에 p값 누적
    avg = sum / COLS; // 평균계산
    return avg;
}

int main(int argc, const char * argv[]) {
    int r;
    
    printf("평균을 구하고자 하는 행은 : ");
    scanf("%d",&r);
    printf("%d 행의 평균은 %6.1f 입니다\n",r,get_row_avg(m,r));
    
    return 0;
}
