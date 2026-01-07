#include <iostream>
using namespace std;

float celsiusParaKelvin(float c);
float celsiusParaFahrenheit(float c);

int main(){

    float celsius, kelvin, fahrenheit;
    cin >> celsius;

    kelvin = celsiusParaKelvin(celsius);
    fahrenheit = celsiusParaFahrenheit(celsius);

    cout << celsius << endl << kelvin << endl << fahrenheit << endl;

return 0;
}

float celsiusParaKelvin(float c){
    return c + 273.15;
}

float celsiusParaFahrenheit(float c){
    return 1.8*c + 32;
}