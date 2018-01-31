#include <stdio.h>

// sizeof()를 통해서 각 자료형의 크기를 알아보는 프로그램
int main(void)
{
    int x;
    
    printf("변수 x의 크기: %d\n",    (int)sizeof(x));
    
    printf("char형의 크기: %d\n",   (int)sizeof(char));
    printf("int형의 크기: %d\n",    (int)sizeof(int));
    printf("short형의 크기: %d\n",  (int)sizeof(short));
    printf("long형의 크기: %d\n",   (int)sizeof(long));
    printf("float형의 크기: %d\n",  (int)sizeof(float));
    printf("double형의 크기: %d\n", (int)sizeof(double));
    
    return 0;
}

