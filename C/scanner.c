# include <stdio.h>

int main(void){
    int integer1;
    int integer2;
    int sum;

    printf("Enter the first integer: \n");
    scanf("%d", &integer1); // Read an integer

    printf("Enter the second integer: \n");
    scanf("%d", &integer2); // Read an integer

    sum = (integer1 + integer2); // Assign total to sum
    printf("Sum is %d\n", sum); // Print sum

    return 0;
}// End of main