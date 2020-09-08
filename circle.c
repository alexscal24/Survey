#include <stdio.h>

// Initialize variables.
#define PI 3.1415926
int radius, boolean;
float circumference, area, diameter;

/*
 * Calculate the diameter using the user inputted radius.
 * Parameters: 
 *      Radius inputted by user.
 * Preconditions:
 *      radius > 0
 * Return:
 *      The diameter of the circle.
 */
float diameterCalc(int radius){
    diameter = radius * 2;
    return diameter;
}

/*
 *Calculate the area using the calculated diameter and user inputted radius.
 * Parameters: 
 *      Diameter, user inputted radius.
 * Preconditions:
 *      Radius > 0
 * Return:
 *      The area of the circle.
 */
float areaCalc(float diameter, int radius){
    area = PI * (radius * radius);
    return area;
}

/*
 *Calculate the circumference of the circle using the user inputted radius.
 * Parameters:
 *      User inputted radius.
 * Preconditions:
 *      radius > 0
 * Return:
 *      The circumference of the circle.
 */
float circumferenceCalc(int radius){
    circumference = 2 * PI * radius;
    return circumference;
}

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
            diameter = diameterCalc(radius);
            area = areaCalc(diameter, radius);
            circumference = circumferenceCalc(radius);

            printf("A circle with radius %d: \n"
                    "\t Diameter: %f \n"
                    "\t Area: %f \n"
                    "\t Circumference: %f \n",radius, diameter, area, circumference); // Print the results of the previous functions.
        }

    
    return 0;
} // End of main.

