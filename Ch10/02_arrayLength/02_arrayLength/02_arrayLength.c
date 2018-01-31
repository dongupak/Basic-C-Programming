#include <stdio.h>

int main(void) {
    int grade[] = {3,2,5,7,9,10,20,2,44,34,7,9,10,20,2,44};
    int i,size;
    
    size = sizeof(grade)/sizeof(grade[0]);
    for(i=0;i<size;i++)
        printf("grade[%d] = %d\n",i,grade[i]);
    return 0;
}
