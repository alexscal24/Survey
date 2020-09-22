#include <stdio.h>

int add(int a, int b, int *sum){
    *sum = a + b;
    return *sum;
}

int main(){
    int a, b, sum;

    a = 5;
    b = 7;
    add(a, b, &sum);

    printf("The sum of %d and %d is %d.\n", a, b, sum);
    return 0;
}