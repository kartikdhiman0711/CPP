#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 2;
    while(i < num){
        if (num % i == 0){
            cout << "Entered number is not a prime number for " << i << endl;
        }
        else{
            cout << "Entered number is a prime number for " << i << endl;
        }
        i += 1;
    }
}