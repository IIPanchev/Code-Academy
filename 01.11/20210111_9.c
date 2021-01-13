#include <stdio.h> 

int main(void){
    int a;
    int M = ~124;

    printf("Enter a number(+-2**32): ");
    scanf("%d",&a);

    a &= M;
    printf("The new number is: %d",a);

    return 0;
}