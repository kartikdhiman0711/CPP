#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0){
        cout << "Entered number is positive number. Press any key to exit.";
    }
    else if (num < 0){
        cout << "Entered number is a negative number. Press any key to exit.";
    }
    else{
        cout << "Entered number is zero. Press any key to exit.";
    }
}