#include <stdio.h>

int base, height;
float area;

int main(void){
    printf("Enter an integer for the base and height of the triangle: \n");
    scanf("%d %d", &base, &height);
    printf("You inputted %d for the base and %d for the height.\n", base, height);

    area = base * height / 2;
    printf("The area of the triangle is %f\n", area);
    return 0;
}