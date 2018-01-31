#include <stdio.h>

int main(void) {
    int x = 10; // 정수형 변수 선언
    int *px = &x; // px는 x의 주소를 저장
    int **ppx = &px; // ppx는 px의 주소를 저장
    
    *px=20; // *px는 변수 x의 값을 참조한다.
    printf("x = %d\n", x);
    printf("*px = %d\n", *px);
    
    **ppx=60; // **ppx는 변수 x의 값을 참조한다.
    printf("x = %d\n", x);
    printf("*px = %d\n", *px);
    printf("**ppx = %d\n", **ppx);
    
    return 0;
}

