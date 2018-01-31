//
//  main.c
//  02_getchPutch
//
//  Created by DongGyu Park on 2017. 11. 6..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>
#include <conio.h>

int main(void) {
    int ch;
    while((ch= getch())!='q')
        putch(ch);
    return 0;
}


