//
//  main.c
//  01_op2
//
//  Created by DongGyu Park on 2017. 9. 9..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 20;
    
    printf("x=%d입니다\n",x);
    x += 10;   // x = x + 10;
    printf("x += 10; 의 결과 x = %d\n",x);
    x -= 10;    // x = x - 10;
    printf("x -= 10; 의 결과 x = %d\n",x);

    return 0;
}
