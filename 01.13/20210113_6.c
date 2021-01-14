#include <stdio.h>

int main(void){
    char ch = -127;
    unsigned char uch = 255;
    int in = 6237498;
    unsigned int uin = 4294967292;
    long long int llin = -9000000000000775845;

    printf("%d \n", ch);
    printf("%d \n", uch);
    printf("%d \n", in);
    printf("%u \n", uin);
    printf("%lld \n", llin);

    return 0;
}