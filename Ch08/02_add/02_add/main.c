#include <stdio.h>

int add(int x, int y)
{
    int result ;
    result = x + y;
    return result;
}
int main(int argc, const char * argv[]) {
    int num ;
    num = add(7,8);
    printf("num = %d\n",num);
    return 0;
}

