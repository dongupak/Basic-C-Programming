//
//  main.c
//  pointerOp3
//
//  Created by DongGyu Park on 2017. 10. 11..
//  Copyright © 2017년 ProfPark. All rights reserved.
//
#include <stdio.h>

int main(void)
{
    int i=10;
    int *pi = &i;
    
    printf("i = %d, pi = %p\n", i, pi);
    (*pi)++;
    printf("i = %d, pi = %p\n", i, pi);
    
    printf("i = %d, pi = %p\n", i, pi);
    *pi++;
    printf("i = %d, pi = %p\n", i, pi);
    return 0;
}
