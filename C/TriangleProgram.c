#include <stdio.h>

#define BASE 4
#define HEIGHT 3
float area;

int main(void){
    area = BASE * HEIGHT / 2;
    printf("A triangle with base %d and height %d has an area of %f.\n", BASE, HEIGHT, area);
    return 0;
}