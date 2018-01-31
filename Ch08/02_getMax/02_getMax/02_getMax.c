#include <stdio.h>

int get_max(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}
int main(void){
    printf("%d\n",get_max(2,5));
    printf("%d\n",get_max(10,5));
    printf("%d\n",get_max(13430,544534));
    return 0;
}
