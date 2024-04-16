#include <iostream>
double convertToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
int main() {
    double celsius, fahrenheit;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    fahrenheit = convertToFahrenheit(celsius);
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;
    celsius = convertToCelsius(fahrenheit);
    std::cout << "Temperature in Celsius: " << celsius << std::endl;
    return 0;
}
