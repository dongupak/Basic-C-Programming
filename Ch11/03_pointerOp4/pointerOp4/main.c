//
//  main.c
//  pointerOp4
//
//  Created by DongGyu Park on 2017. 10. 12..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[] = {100, 200};
    int *p = a, q;
    
    printf("&a[0] = %p, &a[1] = %p\n",&a[0], &a[1]);
    printf("a[0] = %d, a[1] = %d, p = %p, *p = %d\n",a[0],a[1],p,*p);
    
    q = ++*p;
    
    printf("after : q = ++*p; \n");
    printf("a[0] = %d, a[1] = %d, p = %p, *p = %d, q = %d\n",a[0],a[1],p,*p,q);
    
    return 0;
}
