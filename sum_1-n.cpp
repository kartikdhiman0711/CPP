#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 1, sum = 0;
    while(i <= num){
        sum = sum + i;
        i++;
    }
    cout << "Value of sum is: " << sum;
}