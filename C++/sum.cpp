#include <iostream>

int main(){
    std::cout << "Enter first integer: "; //Prompt user for data.
    int number1;
    std::cin >> number1; //Read first integer from user into number1.

    std::cout << "Enter second integer: "; //Prompt user for second integer.
    int number2;
    std::cin >> number2; //Read second integer from user into number2.
    int sum = number1 + number2; //Add the numbers; Store results in sum.
    std::cout << "Sum is " << sum << std::endl; //Display sum; End line.
}