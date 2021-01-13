#include <stdio.h>

int vdigniBitNa(int a, int in);

int main(){
    int a = 15;
    int in = 3;

    printf("%d \n", vdigniBitNa(a,in));
    
    return 0;
}

int vdigniBitNa(int a, int in){
    int M = 1;

    M = M<<in;
    a = a|M;
    
    return a;
} 