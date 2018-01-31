//
//  main.c
//  03_while_vs_dowhile
//
//  Created by DongGyu Park on 2017. 9. 15..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    // while 문
    printf("while문 출력\n");
    i = 0;
    while (i<5)  {
        printf("Hello ");
        i++;
    }
    printf("\n");
    
    printf("do-while문 출력\n");
    i = 0;
    do {
        printf("Hello ");
        i++;
    } while (i<5);
    printf("\n");
    
    return 0;
}
