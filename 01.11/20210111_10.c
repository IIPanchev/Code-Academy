#include <stdio.h>

int main(){
    int a = 32578;
    int in = 3;
    int M = -1;
    
    M <<= in;
    M = ~M;   
    a &= M;

    printf("%d \n", a);

    return 0;
}