//
//  main.c
//  02_typedefEx1
//
//  Created by DongGyu Park on 2017. 12. 28..
//  Copyright © 2017년 ProfPark. All rights reserved.
//

#include <stdio.h>

typedef unsigned char BYTE;
BYTE index  ;          // unsigned int index; 와 같다
BYTE indexA, indexB;

typedef int     INT32;
typedef unsigned int    UINT32;

INT32 i;
UINT32 k;

// typedef를 이용한 정의 1
struct Person { // Person 구조체 선언
    char name[100]; // 구조체 멤버-이름
    int age;        // 구조체 멤버-나이
    int height;     // 구조체 멤버-키
    float weight;   // 구조체 멤버-몸무게
} ;
typedef struct Person Person;

// typedef를 이용한 정의 2
//typedef struct Person { // Person 구조체 선언
//    char name[100]; // 구조체 멤버-이름
//    int age;        // 구조체 멤버-나이
//    int height;     // 구조체 멤버-키
//    float weight;   // 구조체 멤버-몸무게
//} Person ;

struct Point2D {   // Point2D 구조체 정의
    int x;
    int y;
};
typedef struct Point2D Point2D;

int main(int argc, const char * argv[]) {
    // 구조체 변수 personA, personB 선언
    Person personA, personB;
    Person p1, p2;
    
    // vs
    Person personC, personD;
    Point2D p3, p4;
    
    
}
