#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    fp = fopen("sample.txt","w");
    if(fp == NULL) {
        printf("파일 열기 실패\n");
        exit(0);
    }
    
    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fputc('d', fp);
    fputc('e', fp);
    fputc('f', fp);
    printf("sample.txt 파일에 쓰기 성공\n");
    fclose(fp);
    
    return 0;
}


