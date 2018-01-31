//
//  main.c
//  01_calc
//
//  Created by DongGyu Park on 2017. 9. 10..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char op;
    int x, y, result = 0;
    
    printf("수식을 입력하시오\n");
    printf("(예: 2 + 5) \n");
    printf(">>");
    scanf("%d %c %d", &x, &op, &y);
    
    switch (op)
    {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
        case '%':
            result = x % y;
            break;
        default:
            printf("지원되지 않는 연산자입니다. \n");
            break;
    }
    printf("%d %c %d = %d \n", x, op, y, result);
    return 0;
}

