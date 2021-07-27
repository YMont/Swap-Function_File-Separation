#include <stdio.h>
#include "swap.h"

int main(void){
    int a=4, b=5;
    swap(&a, &b);
    printf("a is %d , b is %d", a, b);
    return 0;
}