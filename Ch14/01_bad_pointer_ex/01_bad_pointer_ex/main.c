//
//  main.c
//  01_bad_pointer_ex
//
//  Created by DongGyu Park on 2017. 9. 1..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

// 단일 포인터를 사용하여 main 함수의 greet이 참조하는 값을 newGreet이
// 참조하는 값으로 변경하고자 함
#include <stdio.h>

void change_greet(char *q);
char *newGreet = "Hello";

int main(void) {
    char *greet = "Goodbye";
    printf("greet = %s \n",greet);
    change_greet(greet); // 포인터변수 greet이 저장하고 있는 값을 전달
    printf("greet = %s \n",greet);
    return 0;
}
void change_greet(char *q){ // 포인터 q에 greet이 가진 값이 복사된다
    printf("q = %s \n",q);
    q = newGreet; // q는 newGreet을 참조함
    printf("q = %s \n",q);
}


