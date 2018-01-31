
#include <stdio.h>

int main(void) {
    char s[] = "Dog";
    char t[] = "Cat";
    const char *p=s;  // p가 가리키는 내용이 변경되지 않음
    char *const q=s;  // 포인터 q가 변경되지 않음
    //p[0]='F';    // 오류 : p가 가리키는 내용은 변경할 수 없다
    
    printf("p = %s\n",p);
    p=t;    // p는 새로운 t를 참조할 수 있다
    printf("p = %s\n",p);
    
    printf("q = %s\n",q);
    q[0]='F'; // q가 참조하는 값은 변경가능
    printf("q = %s\n",q);
    
    //q = t;  // 오류 : q는 t를 참조할 수 없다
    return 0;
}


