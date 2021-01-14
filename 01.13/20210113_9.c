#include <stdio.h>

int main(){
    double one = 4.9876543;
    double two = 7.123456789012345678890;
    double three = 18398458438583853.28;
    double four = 18398458438583853.39875937284928422;

    printf("%.7f \n", one);
    printf("%.21f \n", two);
    printf("%.2lf \n", three);
    printf("%17.17lf \n", four);

    return 0;
}
