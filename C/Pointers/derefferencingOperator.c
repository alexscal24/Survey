#include <stdio.h>

int main(){
    int a = 7, d;
    int *aPtr; //Un-Initialized pointer.

    aPtr = &a; //Stores address of a in ptr.
    d = *aPtr; //Put Value at ptr in d.

    printf("a = %d\naPtr = %p\n*aPtr = %p\n ", a, aPtr, d);
}