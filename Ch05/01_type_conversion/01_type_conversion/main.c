//
//  main.c
//  01_type_conversion
//
//  Created by DongGyu Park on 2017. 9. 9..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double f ;
    f = 10; // f는 10.000000으로 자동형 변환됨
    printf("f=%f\n",f);
    
    int i ;
    char x ;
    i = 3.14;
    x = 10000;
    printf("i=%d, x=%d\n",i,x);

    char ch = 'a' ;
    short s = 100;
    printf("result = %d\n", ch+s);
    
    return 0;
}
