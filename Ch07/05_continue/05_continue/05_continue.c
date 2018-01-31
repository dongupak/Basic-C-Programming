#include <stdio.h>

int main(void)
{
    int i;
    
    for(i=0;i<10;i++){
        if(i%3 != 0)  // !=0 는 생략가능
            continue;
        printf("%d\n", i);
    }
    
    return 0;
}
