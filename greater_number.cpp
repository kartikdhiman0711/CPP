#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    if (a>b){
        cout << "a is greater than b. Press any key to exit.";
    }
    else{
        cout << "b is greater than a. Press any key to exit.";
    }
}