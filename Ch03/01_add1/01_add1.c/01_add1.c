/* 
 두 숫자의 합을 계산하는 프로그램
 널널한 박교수의 C강의 예시입니다.
 */

#include <stdio.h>

int main(void)
{
    int x;      // 첫번째 정수를 저장할 변수
    int y;      // 두번째 정수를 저장할 변수
    int sum;    // 두 정수의 합을 저장하는 변수
    
    x = 100;
    y = 200;
    
    sum = x + y;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("두수의 합: %d\n", sum);
    
    return 0;
}



