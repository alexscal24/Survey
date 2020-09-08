#include <stdio.h>

// Initialize variables.
#define PI 3.1415926
int radius, boolean;
float circumference, area, diameter;

// Begin Main.
int main(void){
    printf("Enter the radius of the circle: \n");
    scanf("%d", &radius);
    printf("You inputted %d for the radius. \n", radius);

    if(radius < 0){ // Checks if the radius is less than 0, returns 1 if true and 0 if false.
        boolean = 1;
        return boolean;
    }else{
        boolean = 0;
    }
    
        if(boolean == 0){
            diameter = radius * 2; // Calculate the diameter.
            area = PI * (radius * radius); // Calculate the area.
            circumference = 2 * PI * radius; // Calculate the circumference.

            printf("A circle with radius %d: \n"
                    "\t Diameter: %f \n"
                    "\t Area: %f \n"
                    "\t Circumference: %f \n",radius, diameter, area, circumference); // Print the results of the previous functions.
        }
    return 0;
} // End of main.