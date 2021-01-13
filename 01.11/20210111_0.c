#include <stdio.h>

int addDigit(int a, int b);

int main(void){
    int a = 7;
    int b = 2;
    
    int AnB = addDigit(a,b);
    
    printf("%d", AnB);
    
    return 0;
}

int addDigit(int a, int b){
    
    return a+b;
}