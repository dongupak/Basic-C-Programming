//
//  main.c
//  04_multidimensional_array
//
//  Created by 310Mac on 2017. 8. 30..
//  Copyright © 2017년 Jeong dong ryun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m[3][3] = {10,20,30,40,50,60,70,80,90};
    printf("m = %p\n",m);  // 배열의 시작주소
    printf("m+1 = %p\n", m+1);  // 배열시작주소+1은 1행의 시작주소
    printf("m+2 = %p\n", m+2);
    printf("m[0] = %p\n",m[0]); // 0행의 시작주소
    printf("m[1] = %p\n",m[1]); // 1행의 시작주소
    printf("m[2] = %p\n",m[2]); // 2행의 시작주소
    printf("&m[0][0] = %p\n",&m[0][0]); // 0행의 0열의 주소
    printf("&m[1][0] = %p\n",&m[1][0]); // 1행의 0열의 주소
    printf("&m[2][0] = %p\n",&m[2][0]); // 2행의 0열의 주소

    return 0;
}
