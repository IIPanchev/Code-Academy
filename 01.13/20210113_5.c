#include <stdio.h> 

int main(void){
    char ch = 'b';
    int in = 100;
    float fl = 8.094;
    short int  sin = 24;
    unsigned long int ulin = 45453516;
    
    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(in));
    printf("%d\n",sizeof(fl));
    printf("%d\n",sizeof(sin));
    printf("%d\n",sizeof(ulin));
    return 0;
}