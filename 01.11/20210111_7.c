#include <stdio.h> 

int main(void){
    int a;
    int M = 1431655765;

    printf("Enter a number(+-2**32): ");
    scanf("%d",&a);

    int result = a&M;
    printf("The new number is: %d",result);

    return 0;
}