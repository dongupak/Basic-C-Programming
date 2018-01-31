//
//  main.c
//  07_hello
//
//  Created by DongGyu Park on 2017. 9. 21..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0;  // 루프제어 변수 초기화
    while( i< 5) {  // 조건문
        printf("Hello ");
        i++;   // 증감문
    }
    return 0;
}
