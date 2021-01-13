#include <stdio.h>

int nBit(int a, int n);

int main(){
    int a = 15;
    int n = 5;

    printf("%d \n", nBit(a,n));
    
    return 0;
}

int nBit(int a, int n){
    int M = 1;

    M = M<<n;
    a = a^M;
    
    return a;
} 