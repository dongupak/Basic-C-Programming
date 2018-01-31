//
//  main.c
//  01_good_pointer_ex
//
//  Created by DongGyu Park on 2017. 9. 1..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

// 이중 포인터를 사용하여 main 함수의 greet 값을 변경하고자 함
#include <stdio.h>

void change_greet(char **q);
char *newGreet = "Hello";

int main(void) {
    char *greet = "Goodbye";
    printf("greet = %s \n",greet);
    change_greet(&greet); // 함수에 포인터 변수 greet의 주소를 전달
    printf("greet = %s \n",greet);
    return 0;
}
// 이중포인터 q를 이용해서 포인터 변수 greet의 주소를 받아온다
void change_greet(char **q){
    printf("*q = %s \n",*q); // q가 참조하는 변수의 값을 출력
    *q = newGreet; // newGreet이 참조하는 곳의 주소를 *q에 복사.
    printf("*q = %s \n",*q);
}

