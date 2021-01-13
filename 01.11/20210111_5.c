#include <stdio.h>

int vdigniBitNa(int a, int in);

int main(){
    int a = 73;
    int in = 4;

    printf("%d \n", vdigniBitNa(a,in));
    
    return 0;
}

int vdigniBitNa(int a, int in){
    int M = 1;

    M = M<<in;
    a = a^M;
    
    return a;
}  