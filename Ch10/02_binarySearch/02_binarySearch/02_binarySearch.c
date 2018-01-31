#include <stdio.h>

int main(void)
{
    int first, last, middle, key, array[40];
    // 0, 10, 20, 30,...,390까지의 수를 array에 넣는다
    
    for(int i=0;i<40;i++) {
        array[i] = i*10;
        printf("%d ", array[i]);
    }
    
    printf("\nEnter key ");
    scanf("%d",&key);
    first = 0; last = 40-1;
    middle = (first+last)/2;
    
    while (first <= last) {
        if (array[middle] < key)
            first = middle + 1;
        else if (array[middle] == key) {
            printf("#%d found at location %d.\n", key, middle+1);
            break;
        }
        else
            last = middle - 1;
        
        middle = (first + last)/2;
    }
    if (first > last)
        printf("Not found! %d is not present.\n", key);
    
    return 0;
}


