#include <stdio.h>

// Initialize variables and define constants.
#define CONVERSIONF 32.0
#define CONVERSIONK 273.15
float tempf, tempc, tempk;
char tempVersion;

/*
 *Converts the user inputted fahrenheit value into celsius.
 * Parameters:
 *      User inputted fahrenheit
 * Preconditions:
 *      Inputted value is in fahrenheit.
 * Return:
 *      The converted temperature in celsius.
 */
float fahrenheitToCelsius(float tempf){
    tempc = (tempf - CONVERSIONF) / 1.8;
    return tempc;
}

/*
 *Converts the user inputted fahrenheit value into kelvin.
 * Parameters:
 *      User inputted fahrenheit value, fahrenheit value converted to celsius.
 * Preconditions:
 *      Inputted value is fahrenheit.
 * Return:
 *      The converted temperature in kelvin.\
 */
float fahrenheitToKelvin(float tempc){
    tempk = tempc + CONVERSIONK;
    return tempk;
}

// Main Start.
int main(void){
    printf("Enter the temperature in Fahrenheit in the format of ##.## F: \n");
    scanf("%f %c", &tempf, &tempVersion); // Read in the degrees and type of temperature from user.
    printf("You inputted %f %c \n", tempf, tempVersion); // Repeat back to the user what they inputted.

    if(tempVersion != 'F'){
        printf("That is the wrong temperature type.");
        return 1;
    }else{
        tempc = fahrenheitToCelsius(tempf); // Convert user inputted Fahrenheit to Celsius.
        tempk = fahrenheitToKelvin(tempc); // Uses the converted temperature to convert the inputted Fahrenheit to Celsius.

        printf("%f %c converts to: \n"
               "\t %f C \n"
               "\t %f K \n", tempf, tempVersion, tempc, tempk); // Print the results of the previous functions.

        return 0;
    }
}// End of Main.