#include <stdio.h>

int main(void) {
    int facNum = 1 ;
    int i,n;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        facNum = facNum*i;
    }
    printf("%d!은 %d입니다.",n,facNum);
    
    return 0;
}
