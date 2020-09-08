#include <float.h>
#include <stdio.h>
int main(){
    float f;
    double d;
    f = 70.0/3.0;
    d = 70.0/3.0;
    printf("Value of f: %f, or %0.4f\n", f, f);
    printf("Value of d: %lf\n", d);

    printf("Float size: %lu \n", sizeof(float));
    printf("Float Min: %E\n", FLT_MIN);
    printf("Float Max: %E\n", FLT_MAX);
    printf("Acc: %d\n", FLT_DIG);
    
}
