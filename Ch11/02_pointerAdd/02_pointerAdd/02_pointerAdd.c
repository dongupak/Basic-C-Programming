
#include <stdio.h>

int main(void) {
    char *pc;
    int *pi;
    double *pd;
    
    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;
    printf("증가 전 pc=%d, pi=%d, pd=%d\n",(int)pc,(int)pi,(int)pd);
    pc++;
    pi++;
    pd++;
    printf("증가 후 pc=%d, pi=%d, pd=%d\n",(int)pc,(int)pi,(int)pd);
    
    printf("pc+2=%d, pi+2=%d, pd+2=%d\n",(int)(pc+2),(int)(pi+2),(int)(pd+2));
    
    return 0;
}


