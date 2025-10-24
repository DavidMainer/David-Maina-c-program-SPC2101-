//c program to that takes temperature in Fahrenheit as input and returns in celcius
//Name:David Maina Onchoke
//RegNo:PA106/G/28779/25

#include <stdio.h>


//returns nothing but accepts input that is float
void convertToCelsius() {
    float fahrenheit, celsius;
//User input data
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
//formula to convert from fahrenheit to celcius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("Temperature in Celsius = %.0fC\n", celsius);
}

int main(void) {
    convertToCelsius();
    return 0;
}
