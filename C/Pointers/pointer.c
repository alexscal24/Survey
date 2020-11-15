#include <stdio.h>

int main(){
    int a = 7;
    int *aPtr; //Un-Initialized pointer
    aPtr = &a; //Stores address of a in Ptr

    printf("a = %d\naPtr = %p\n", a, aPtr);
}