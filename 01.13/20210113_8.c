#include <stdio.h>

int main(void){
    char x = 8;
    printf("%d\n", x);
    x = x - 2;
    printf("%d\n", x);
    x = x + 6;
    printf("%d\n", x);
    x = x - 10 + 2;
    printf("%d\n", x);
    
    return 0;
}