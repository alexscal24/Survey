#include <stdio.h>

int base, hypotenuse, perpendicular, bPlusP, hypSquared;

int main(void){
    printf("Enter the Base, Perpendicular and Hypotenuse of the triangle: \n");
    scanf("%d %d %d", &base, &perpendicular, &hypotenuse);

    bPlusP = (base * base) + (perpendicular * perpendicular);
    hypSquared = (hypotenuse * hypotenuse);

    if(hypSquared == bPlusP){
        printf("It is a right triangle. \n");
    }else if(hypSquared > bPlusP){
        printf("The triangle is Obtuse.");
    }else{
        printf("The triangle is Acute.");
    }
    return 0;
}

 