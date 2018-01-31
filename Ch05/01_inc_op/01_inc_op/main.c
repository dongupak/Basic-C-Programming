//
//  main.c
//  01_inc_op
//
//  Created by DongGyu Park on 2017. 9. 9..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 1;
    x = x++;
    
    printf("x= %d\n", x); // x는 어떤 값을 가질까요?
    return 0;
}
