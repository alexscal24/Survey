#include <stdio.h>

// Initialize variables.
#define PI 3.1415926
int boolean;
float circumference, area, diameter, radius;

/*
 * Calculate the diameter using the user inputted radius.
 * Parameters: 
 *      Radius inputted by user.
 * Preconditions:
 *      radius > 0
 * Return:
 *      The diameter of the circle.
 */
float diameterCalc(float radius){
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
float areaCalc(float diameter, float radius){
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
float circumferenceCalc(float radius){
    circumference = 2 * PI * radius;
    return circumference;
}

// Begin Main.
int main(void){
    printf("Enter radius: ");
    scanf("%f", &radius);

    if(radius < 0){ // Checks if the radius is less than 0, returns 1 if true and 0 if false.
        printf("Invalid radius. Must be greater than zero.\n");
        boolean = 1;
        return boolean;
    }else{
        boolean = 0;
    }
    
        if(boolean == 0){
            diameter = diameterCalc(radius);
            area = areaCalc(diameter, radius);
            circumference = circumferenceCalc(radius);

            printf("A circle with radius %0.3f:\n"
                    "\tDiameter: %0.3f\n"
                    "\tArea: %0.3f\n"
                    "\tCircumference: %0.3f\n",radius, diameter, area, circumference); // Print the results of the previous functions.
        }

    
    return 0;
} // End of main.

