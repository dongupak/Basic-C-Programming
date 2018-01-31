//
//  main.c
//  02_macro
//
//  Created by DongGyu Park on 2017. 9. 8..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

#define EXCHANGE_RATE 1050.5

int main(int argc, const char * argv[]) {
    int won1, won2;
    int dollar1 = 1, dollar2 = 2;
    
    won1 = EXCHANGE_RATE * dollar1 ;
    won2 = EXCHANGE_RATE * dollar2 ;
    
    printf("%d달러는 %d원 입니다\n", dollar1, won1);
    printf("%d달러는 %d원 입니다\n", dollar2, won2);
    
    return 0;
}
