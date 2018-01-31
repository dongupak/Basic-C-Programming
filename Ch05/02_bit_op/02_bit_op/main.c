//
//  main.c
//  02_bit_op
//
//  Created by DongGyu Park on 2017. 9. 11..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf(" %d & %d = %d\n", 9, 10, 9&10);
    printf(" %d | %d = %d\n", 9, 10, 9|10);
    printf(" %d ^ %d = %d\n", 9, 10, 9^10);
    printf(" ~%d = %d\n", 9, ~9);
    printf("논리 부정 !%d = %d\n", 9, !9);
    
    // shift 연산
    printf(" %d << %d = %d \n", 4, 1, 4<<2);
    printf(" %d >> %d = %d \n", 4, 1, 4>>2);
    
    return 0;
}
