#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    int c;
    
    fp = fopen("sample.txt","r");
    if(fp==NULL) {
        printf("파일 열기 실패\n");
        exit(0);
    }
    printf("---- sample.txt file ----\n");
    while((c = fgetc(fp)) != EOF){
        putchar(c);
    }
    fclose(fp);
    printf("\n");
    return 0;
}


