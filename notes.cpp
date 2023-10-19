// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int amt;
    cout<<"Enter the amount: "<< endl;
    cin>>amt;
    int r500, r200, r100, r50, r20, r10, r5, r2, r1;
    switch(1){
        case 1:
        r500 = amt / 500;
        cout << r500 << " notes of rupees 500 required."<< endl;
        amt = amt % 500;
        case 2:
        r200 = amt / 200;
        cout << r200 << " notes of rupees 200 required."<< endl;
        amt = amt % 200;
        case 3:
        r100 = amt / 100;
        cout << r100 << " notes of rupees 100 required."<< endl;
        amt = amt % 100;
        case 4:
        r50 = amt / 50;
        cout << r50 << " notes of rupees 50 required."<< endl;
        amt = amt % 50;
        case 5:
        r20 = amt / 20;
        cout << r20 << " notes of rupees 20 required."<< endl;
        amt = amt % 20;
        case 6:
        r10 = amt / 10;
        cout << r10 << " notes of rupees 10 required."<< endl;
        amt = amt % 10;
        case 7:
        r5 = amt / 5;
        cout << r5 << " notes of rupees 5 required."<< endl;
        amt = amt % 5;
        case 8:
        r2 = amt / 2;
        cout << r2 << " notes of rupees 2 required."<< endl;
        amt = amt % 2;
        case9:
        r1 = amt / 1;
        cout << r1 << " notes of rupees 1 required."<< endl;
        // amt = amt % 1;
    }
    cout<< "-----------Thanks-----------"<< endl << "---Press any key to exit---";
    return 0;
}