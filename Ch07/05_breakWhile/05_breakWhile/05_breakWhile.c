#include <stdio.h>
#define SEED_MONEY  1000000
int main(void)
{
    int year = 0, money = SEED_MONEY;

    while(1) { // 원금의 10배로 돈이 불어나는 시간
        year++;
        money += money*0.30;
        if(money > 10*SEED_MONEY)
            break;
    }
    printf("%d년\n", year);
    return 0;
}
