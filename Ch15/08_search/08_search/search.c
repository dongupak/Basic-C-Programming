#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char fname[128];
    char buffer[256];
    char word[256];
    int line_num = 0;
    
    printf("입력 파일 이름을 입력하시오: ");
    scanf("%s", fname);
    
    printf("탐색할 단어를 입력하시오: ");
    scanf("%s", word);
    
    // 파일을 읽기 모드로 연다.
    if((fp=fopen(fname, "r"))==NULL){
        fprintf(stderr, "파일 %s을 열 수 없습니다.\n",fname);
        return 0;
    }
    
    while(fgets(buffer, 256, fp)){
        line_num++;
        if(strstr(buffer, word))
            printf("%s: 줄 %d에서 %s가(이) 발견되었습니다.\n",fname,line_num,word);
    }
    fclose(fp);
    
    return 0;
}
