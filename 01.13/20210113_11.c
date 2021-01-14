#include <stdio.h>

int main(){
    unsigned char cnt;
    float total=0, sub=0, kg=0, tomatoes=4.5, flour=1.8, yogurt=0.5, cone=0.6, candy=1.5, lollipop=0.15;

    printf("Hello, and welcome to our shop. Today we offer tomatoes, flour, yogurt, ice cream, candy and lollipops!\n ");
    printf("Kilos of tomatoes? ");
    scanf("%f",&kg);
    sub=kg*tomatoes;
    printf("Subtotal: %0.2f\n" ,sub);
	total+=sub;

    printf("Kilos of flour? ");
    scanf("%f",&kg);
    sub=kg*flour;
    printf("Subtotal: %0.2f\n" ,sub);
    total+=sub;

    printf("Count of yogurt? ");
    scanf("%d",&cnt);
    sub=cnt*yogurt;
    printf("Subtotal: %0.2f\n" ,sub);
    total+=sub;

    printf("Number of ice creams cones? ");
    scanf("%d",&cnt);
    sub=cnt*cone;
    printf("Subtotal: %0.2f\n" ,sub);
    total+=sub;

    printf("Number of candies? ");
    scanf("%d",&cnt);
    sub=cnt*candy;
    printf("Subtotal: %0.2f\n" ,sub);
    total+=sub;

    printf("Number of lollipops? ");
    scanf("%d",&cnt);
    sub=cnt*lollipop;
    printf("Subtotal: %0.2f\n" ,sub);
    total+=sub;

    printf("Your order total: %.2f \n",total);
    return 0;
}