//
//  main.c
//  01_op
//
//  Created by DongGyu Park on 2017. 9. 8..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1 = 7,num2 = 4, result;
    
    printf("num1=%d num2=%d 일 때\n", num1,num2);
    result = num1+num2;
    printf("num1+num2 = %d \n",result);
    result = num1-num2;
    printf("num1-num2 = %d \n",result);
    result = num1*num2;
    printf("num1*num2 = %d \n",result);
    result = num1/num2;
    printf("num1/num2 = %d \n",result);
    result = num1%num2;
    printf("%d(을)를 %d(으)로 나눈 나머지 = %d \n",num1,num2,result);
    
    return 0;
}
