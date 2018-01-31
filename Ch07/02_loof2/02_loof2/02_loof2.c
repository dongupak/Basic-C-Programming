
#include <stdio.h>

int main(void)
{
    int meter;
    int i=1;
    
    while( i<= 6 ){
        meter = i * 1609;
        printf("%d 마일은 %d미터입니다\n",i,meter);
        i++;
    }
    return 0;
}

