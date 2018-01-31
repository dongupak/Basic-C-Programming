#include <stdio.h>

int main(void) {
    int arr[3][5] = {
        {0,1,2,3,4},
        {5,6,7,8,9},
        {4,5,6,7,8}
    };
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            sum += arr[i][j];
        }
    }
    printf("2차배열의 합은 : %d\n",sum);
}
