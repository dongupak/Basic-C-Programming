//
//  main.c
//  15_2_printf
//
//  Created by DongGyu Park on 2018. 1. 12..
//  Copyright © 2018년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 출력 플래그 알아보기
    printf("출력 플래그 알아보기 예제 \n");
    printf("1234567890\n");
    printf("%d\n",123);
    printf("%010d\n",123);
    printf("% d\n",123);
    printf("%+d\n",123);
    printf("%d\n",123);
    printf("%o\n",123);   // 숫자 0이 아닌 문자 'o'
    printf("%#x\n",123);
    
    // 필드폭 알아보기
    printf("\n필드폭 알아보기 예제 \n");
    printf("%10dABC\n",123);
    printf("%-10dABC\n",123);
    printf("%10d\n",123);
    printf("%10s\n","abc");
    printf("%-10s\n","abc");
    
    // 정밀도
    printf("\n정밀도 알아보기 예제 \n");
    printf("%f\n",1.23456789);
    printf("%e\n",100.23456789);
    printf("%10.3e\n",1.23456789);
    printf("%-10.3e\n",1.234567);
    
    return 0;
}
