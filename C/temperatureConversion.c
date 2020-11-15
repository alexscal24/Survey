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
    float tempC = fahrenheitToCelsius(temp);
    tempk = tempC + CONVERSIONK;
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
    printf("Enter input temperature: ");
    scanf("%f %c", &temp, &tempVersion); // Read in the degrees and type of temperature from user.

    if(tempVersion != 'f' && tempVersion != 'c' && tempVersion != 'k' && tempVersion != 'F'){
        printf("Invalid temperature scale\n");
        boolean = 1;
        return boolean;
    }else if(tempVersion == 'f' || tempVersion == 'F'){
        tempc = fahrenheitToCelsius(temp); // Convert user inputted Fahrenheit to Celsius.
        tempk = fahrenheitToKelvin(temp); // Uses the converted temperature to convert the inputted Fahrenheit to Celsius.

        printf("%0.2f Fahrenheit converts to:\n"
               "\t%0.2f C\n"
               "\t%0.2f K\n", temp, tempc, tempk); // Print the results of the previous functions.
        boolean = 0;
        return boolean;
    }else if (tempVersion == 'c'){
        tempf = celsiusToFahrenheit(temp);
        tempk = celsiusToKelvin(temp);

        printf("%0.2f Celsius converts to:\n"
               "\t%0.2f F\n"
               "\t%0.2f K\n", temp, tempf, tempk);
        boolean = 0;
        return boolean;
    }else if(tempVersion == 'k'){
        tempf = kelvinToFahrenheit(temp);
        tempc = kelvinToCelsius(temp);

        printf("%0.2f Kelvin converts to:\n"
               "\t%0.2f C\n"
               "\t%0.2f F\n", temp, tempc, tempf);
        boolean = 0;
        return boolean;
    }
}// End of Main.