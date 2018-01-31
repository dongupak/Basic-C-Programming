#include <stdio.h>

int main(void) {
    int a[5]={1,2,3,4,5};
    int (*pa)[5]; // int[5] 배열에 대한 포인터 선언
    int i;
    pa = &a; // 배열의 주소 대입
    for(i=0;i<5;i++)
        printf("%d \n",(*pa)[i]); // 배열포인터를 통해 각 원소에 접근
    return 0;
}


