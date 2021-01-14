#include <stdio.h> 

void bin(unsigned n){
    unsigned i;
    for(i = 1 << 7; i > 0; i = i >> 1)
        (n&i)? printf("1"): printf("0");
    printf("\n");
}
int main(){
    char a = 255, b = 10;
    bin(a);
    bin(b);
    a+=b;
    printf("%c\n", a);
    printf("%d\n", a);
    bin(a);
    return 0;
}