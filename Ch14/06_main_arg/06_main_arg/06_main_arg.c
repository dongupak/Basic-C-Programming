#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0;
    for(i=0;i<argc;i++)
        printf("명령어 행에서 %d번째 문자열 = %s\n", i, argv[i]);
    return 0;
}

