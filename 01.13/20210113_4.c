#include <stdio.h> 

void bin(unsigned n){
    unsigned i;
    for(i = 1 << 7; i > 0; i = i >> 1)
        (n&i)? printf("1"): printf("0");
    printf("\n");
}
int main(){
    char a = 10;
    bin(a);
    char z = -127;
    bin(z);
    z+=a;
    printf("%d\n", z);
    bin(z);
    return 0;
}