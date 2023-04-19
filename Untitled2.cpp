#include <iostream>
using namespace std; 
void konversi(double x, char from, char to) {
    if (from == 'c') {
        if (to == 'f') {
            x = (9/5) * x + 32;  // Celcius to Fahrenheit
        } 
		else if (to == 'k') {
            x = x + 273.15;  // Celcius to Kelvin
        } else if (to == 'r') {
            x = x * 4/5;  // Celcius to Reamur
        }
    } else if (from == 'f') {
        if (to == 'c') {
            x = (x - 32) * 5/9;  // Fahrenheit to Celcius
        } else if (to == 'k') {
            x = (x + 459.67) * 5/9;  // Fahrenheit to Kelvin
        } else if (to == 'r') {
            x = (x - 32) * 4/9;  // Fahrenheit to Reamur
        }
    } else if (from == 'k') {
        if (to == 'c') {
            x = x - 273.15;  // Kelvin to Celcius
        } else if (to == 'f') {
            x = (x * 9/5) - 459.67;  // Kelvin to Fahrenheit
        } else if (to == 'r') {
            x = (x - 273.15) * 4/5;  // Kelvin to Reamur
        }
    } else if (from == 'r') {
        if (to == 'c') {
            x = x * 5/4;  // Reamur to Celcius
        } else if (to == 'f') {
            x = (x * 9/4) + 32;  // Reamur to Fahrenheit
        } else if (to == 'k') {
            x = (x * 5/4) + 273.15;  // Reamur to Kelvin
        }
    }
}

int main()
{
	double suhu=100;
    konversi(suhu,'c','k');
    cout<<suhu;
}

