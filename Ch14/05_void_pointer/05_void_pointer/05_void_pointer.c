#include <stdio.h>

int main(void) {
    int a[] = {10, 20, 30, 40, 50};
    void *vp;
    
    //*vp = 35; // 오류
    printf("%p\n", vp);
    vp++; // 가능하지만 초기화되지 않았으므로 warning
    printf("%p\n", vp);
    
    vp = a; // 가능
    printf("vp = %p *vp = %d\n", vp, *(int *)vp);
    vp++;  // 초기화가 되었으므로 경고가 사라짐
    printf("vp = %p *vp = %d\n", vp, *(int *)vp);
    
    vp = &a[2]; // 가능
    printf("vp = %p\n", vp);
    
    printf("변경 전 : %d\n", a[2]);
    *(int *)vp = 35; //가능
    printf("변경 후 : %d\n", a[2]);
    
    return 0;
}



