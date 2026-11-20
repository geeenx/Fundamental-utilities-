#include <stdio.h>

// Q1: Electric Bill Function
float calculateElectricBill(int units) {
    float bill = 0.0;
    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }
    return bill;
}

// Q2: Taxi/Fare Calculator Function
float calculateFare(float distance) {
    return distance * 50.0;
}

// Q3: Temperature Conversion Function
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    // Testing Q1
    int units = 250;
    printf("Electric Bill for %d units = KSh. %.2f\n", units, calculateElectricBill(units));

    // Testing Q2
    float distance = 10.0;
    printf("Fare for %.1f km = KSh. %.2f\n", distance, calculateFare(distance));

    // Testing Q3
    float fahrenheit = 98.6;
    printf("Temperature %.1f°F = approximately %.2f°C\n", fahrenheit, convertToCelsius(fahrenheit));

    return 0;
}
