#include<iostream>
// #include <bits/stdc++.h>
using namespace std;
int countSetBits(int n){
    int count = 0;
    // int x = n;
    while(n!=0){
        count = count + (n & 1);
        n>>=1;
    }
    return count;
}
int main(){
    int a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << "Number of set bits in "<<a<<" is: "<< countSetBits(a) << endl;
    cout << "Number of set bits in "<<b<<" is: "<< countSetBits(b) << endl;
    cout << "Total number of set bits are: " << (countSetBits(a) + countSetBits(b)) << endl;
}