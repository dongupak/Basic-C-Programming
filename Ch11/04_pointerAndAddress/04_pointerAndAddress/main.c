//
//  main.c
//  03_pointerAndAddress
//
//  Created by DongGyu Park on 2017. 9. 1..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5] = {20,30,40};
    
    // a와 &a[0] 값을 확인하는 printf
    printf("a = %p &a[0] = %p\n", a, &a[0]);
    
    // a[0],a[1],.. 와 *(a+0),*(a+1),*(a+2),..
    // 값을 출력함
    for(int i=0; i<5; i++)
        printf("a[%d] = %d, *(a+%d) = %d\n", i, a[i], i, *(a+i));
    return 0;
}
