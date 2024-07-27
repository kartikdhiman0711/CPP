#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z'){
        cout << "Entered character is in uppercase. Press any key to exit.";
    }
    else if (ch >= 'a' && ch <= 'z'){
        cout << "Entered character is in lowercase. Press any key to exit.";
    }
    else{
        cout << "Entered character is number. Press any key to exit.";
    }
}