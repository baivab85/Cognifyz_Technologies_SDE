#include <iostream>

using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    char choice;
    double temperature;

    cout << "Temperature Converter" << endl;
    cout << "---------------------" << endl;

    do {
        cout << "Choose an option:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                cout << "Equivalent temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << " F" << endl;
                break;
            case '2':
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                cout << "Equivalent temperature in Celsius: " << fahrenheitToCelsius(temperature) << " C" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1 or 2." << endl;
        }

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the Temperature Converter!" << endl;

    return 0;
}
