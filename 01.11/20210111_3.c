#include <stdio.h>

int iz4istiBitna(int a, int in);

int main(){
    int a = 15;
    int in = 3;

    printf("%d \n", iz4istiBitna(a,in));
    
    return 0;
}

int iz4istiBitna(int a, int in){
    int M = 1;

    M = M<<in;
    M = ~M;
    a = a&M;

    return a;
}