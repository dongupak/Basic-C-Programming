#include <stdio.h>

int main(void) {
    int i, n;
    char *x[] = {
        "hello",
        "hi",
        "welcome",
        "bonjour"
    };
    n = sizeof(x)/sizeof(x[0]); //배열원소 개수 구하기
    for(i=0;i<n;i++){
        printf("%s \n",x[i]);
    }
    return 0;
}




