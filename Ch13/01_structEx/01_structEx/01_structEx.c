#include <stdio.h>
#include <stdlib.h>

struct student{
    int student_id;
    char name[10];
    double grade;
};

int main(void) {
    struct student s = {20170001, "kim", 3.4}; // 초기화
    printf("학번: %d\n",s.student_id);
    printf("이름: %s\n",s.name);
    printf("학점: %f\n",s.grade);
    
    s.student_id = 20170001;
    strcpy(s.name,"홍길동");
    //s.name = "홍길동"; // 이렇게 하면 안됩니다
    s.grade = 4.3;
    
    printf("학번: %d\n",s.student_id);
    printf("이름: %s\n",s.name);
    printf("학점: %f\n",s.grade);
    return 0;
}
