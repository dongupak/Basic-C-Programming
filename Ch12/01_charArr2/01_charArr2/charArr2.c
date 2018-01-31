#include <stdio.h>

int main(void) {
    // 다음과 같은 방법으로 문자열을 표현할 수 있음
    char str1[6] = "Busan";
    char str2[3] = {'i','s','\0'};
    char str3[] = "the largest port of Korea.";
    
    printf("%s %s %s\n",str1,str2,str3);
    return 0;
}
