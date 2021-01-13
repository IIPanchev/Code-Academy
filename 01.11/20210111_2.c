 #include <stdio.h>

int vzemiBitna(int a, int in);

int main(){
    int a = 15;
    int in = 3;

    printf("%d \n", vzemiBitna(a,in));
    
    return 0;
}

int vzemiBitna(int a, int in){
    int M = 1;

    a = a>>in;
    a = a&M;
    
    return a;
}