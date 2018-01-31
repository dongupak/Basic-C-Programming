#include <stdio.h>

int main(void)
{
    int key, array[40];
    for(int i=0;i<40;i++)
        array[i] = i*10;

    printf("Enter key ");
    scanf("%d",&key);
    for(int i=0;i<40;i++){
        if(array[i]==key){
            printf("#%d found at location %d\n",key,i+1);
        }
    }
}
