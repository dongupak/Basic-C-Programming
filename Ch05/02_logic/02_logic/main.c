//
//  main.c
//  02_logic
//
//  Created by DongGyu Park on 2017. 9. 10..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x, y;
    
    printf("두 정수를 입력하시오: ");
    scanf("%d%d", &x, &y);
    
    printf("%d && %d의 결과값: %d\n", x, y, x && y);
    printf("%d || %d의 결과값: %d\n", x, y, x || y);
    printf("!%d의 결과값: %d\n", x, !x);
    
    return 0;
}
