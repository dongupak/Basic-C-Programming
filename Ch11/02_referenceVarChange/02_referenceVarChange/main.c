//
//  main.c
//  02_referenceVarChange
//
//  Created by DongGyu Park on 2017. 9. 29..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 100;             // 변수 i의 선언과 100 값으로 초기화
    int *pi = &i;            // 포인터 변수 pi가 i를 참조
    
    printf("&i = %p\n", &i);    // 변수 i의 주소 출력
    printf("i = %d\n", i);      // 변수 i의 값 출력
    
    printf("*pi = %d\n", *pi);  // 포인터 변수 pi가 참조하는 변수의 값 출력
    printf("pi = %p\n", pi);    // 포인터 변수 pi의 값 출력
           
    i = 200;                  // 혹은 i = 200;
    printf("i = %d\n", i);      // 변수 i의 값 출력
    printf("*pi = %d\n", *pi);  // 포인터 변수 pi가 참조하는 변수의 값 출력

    return 0;
}
