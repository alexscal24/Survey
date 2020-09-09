#include <stdio.h>

// Initialize variables and define constants.
#define CONVERSIONF 32.0
#define CONVERSIONK 273.15
int boolean;
float temp, tempf, tempc, tempk;
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
float fahrenheitToCelsius(float temp){
    tempc = (temp - CONVERSIONF) / 1.8;
    return tempc;
}

/*
 *Converts the user inputted fahrenheit value into kelvin.
 * Parameters:
 *      Fahrenheit value converted to celsius.
 * Preconditions:
 *      Inputted value is fahrenheit.
 * Return:
 *      The converted temperature in kelvin.
 */
float fahrenheitToKelvin(float temp){
    tempk = ((temp - CONVERSIONF) * (0.55555556)) + CONVERSIONK;
    return tempk;
}

/*
 *Converts user inputted Celsius into Fahrenheit.
 * Parameters: 
 *      User inputted Celsius.
 * Preconditions:
 *      Inputted value is celsius.
 * Return:
 *      The converted temperature in Fahrenheit.
 */
float celsiusToFahrenheit(float temp){
    tempf = (temp * 1.8) + CONVERSIONF;
    return tempf;
}

/*
 *Converts user inputted celsius into Kelvin.
 * Parameters:
 *      User inputted celsius.
 * Preconditions:
 *      Inputted value is celsius.
 * Return:
 *      The converted temperature in Kelvin.
 */
float celsiusToKelvin(float temp){
    tempk = temp + CONVERSIONK;
    return tempk;
}

/*
 *Converts user inputted Kelvin to Fahrenheit.
 * Parameters:
 *      User inputted Kelvin.
 * Preconditions:
 *      Inputted value is Kelvin.
 * Return:
 *      The converted temperature in Fahrenheit.
 */
float kelvinToFahrenheit(float temp){
    tempf = (temp - CONVERSIONK) * 1.8 + 32;
    return tempf;
}

/*
 *Converts the user inputted Kelvin to Celsius.
 * Parameters:
 *      User inputted Kelvin.
 * Preconditions:
 *      Inputted value is Kelvin.
 * Return:
 *      The converted temperature in Celsius.
 */
float kelvinToCelsius(float temp){
    tempc = (temp - CONVERSIONK);
    return tempc;
}

// Main Start.
int main(void){
    printf("Enter the temperature in the format of ##.## 'Type': \n");
    scanf("%f %c", &temp, &tempVersion); // Read in the degrees and type of temperature from user.
    printf("You inputted %f %c \n", temp, tempVersion); // Repeat back to the user what they inputted.

    if(tempVersion != 'F' && tempVersion != 'C' && tempVersion != 'K'){
        printf("Invalid Temperature Scale.");
        boolean = 1;
        return boolean;
    }else if(tempVersion == 'F'){
        tempc = fahrenheitToCelsius(temp); // Convert user inputted Fahrenheit to Celsius.
        tempk = fahrenheitToKelvin(temp); // Uses the converted temperature to convert the inputted Fahrenheit to Celsius.

        printf("%f %c converts to: \n"
               "\t %f C \n"
               "\t %f K \n", temp, tempVersion, tempc, tempk); // Print the results of the previous functions.
        boolean = 0;
        return boolean;
    }else if (tempVersion == 'C'){
        tempf = celsiusToFahrenheit(temp);
        tempk = celsiusToKelvin(temp);

        printf("%f %c converts to: \n"
               "\t %f F \n"
               "\t %f K \n", temp, tempVersion, tempf, tempk);
    }else if(tempVersion == 'K'){
        tempf = kelvinToFahrenheit(temp);
        tempc = kelvinToCelsius(temp);

        printf("%f %c converts to: \n"
               "\t %f F \n"
               "\t %f C \n", temp, tempVersion, tempf, tempc);
    }
}// End of Main.