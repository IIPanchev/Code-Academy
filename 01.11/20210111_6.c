 #include <stdio.h>

int main(){
    int a = 73;
    int in = 4;
    int M = 1<<in;

    a = a^M;

    printf("%d \n", a);
    
    return 0;
}