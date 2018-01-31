//
//  main.c
//  03_pointerAddress
//
//  Created by DongGyu Park on 2017. 8. 30..
//  Copyright © 2017년 ProfPark. All rights reserved.
//
#include <stdio.h>

int main(void) {
    int a = 10;
    char b = 'c';
    double c = 170.2;
    
    printf("a의 주소 : %p\n",&a);
    printf("b의 주소 : %p\n",&b);
    printf("c의 주소 : %p\n",&c);
    
    return 0;
}
