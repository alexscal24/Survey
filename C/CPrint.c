#include <stdio.h> // Use Standard Streams

int main(void){

    // Puts prints a String to standard output.
    puts("Hello, World!");

    // This is equivalent to:
    printf("%s\n", "Hello, World!");

    // Which is also equivalent to:
    fprintf(stdout, "%s\n", "Hello, World");
    return 0;
}