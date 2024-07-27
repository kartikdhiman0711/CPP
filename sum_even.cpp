#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 2, sum = 0;
    while(i <= num){
        sum = sum + i;
        i += 2;
    }
    cout << "Value of sum is: " << sum;
}