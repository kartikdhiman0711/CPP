#include <iostream>
using namespace std;
int main(){
    float f, cel;
    cout << "Enter temperature in fahrenheit: ";
    cin >> f;
    cel = (f - 32) * 5 / 9;
    cout << "Temperature in celcius is: " << cel;
}