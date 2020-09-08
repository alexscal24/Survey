#include <stdio.h>

int main(void){
    // Define an int called 'a' and initialize it to 0.
    int a = 0;
    int b = 0;
    float c = 0.0;

    // Read and integer from standard input. Note the "And" symbol before 'a'.
    printf("Enter a integer number: ");
    scanf("%d", &a);

    // Read one integer and one float from standard input.
    printf("Enter one integer and one float: ");
    scanf("%d %f", &b, &c);
    printf("You inputted Integer = %d and Float = %f \n", b, c);

    // Print the sum of a and b.
    printf("%d + %d = %d\n", a, b, a + b);

    return 0;
}