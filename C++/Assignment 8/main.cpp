#include <iostream>
#include "Temperature.h"

int main(){
    float temp = 68.0;

    std::cout << "Fahrenheit: " << temp << std::endl;
    Temperature t;
    t.setTemp(temp);
    
    float celsius = t.getCelsius();
    std::cout << "in Celsius: " << celsius << std::endl;

    float kelvin = t.getKelvin();
    std::cout << "in Kelvin: " << kelvin << std::endl;
}