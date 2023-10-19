#include <iostream>
using namespace std;
int fib(int n){
    int a = 0;
    int b = 1;
    int c = 0;
    if(n == 1)
        return 1;
    for (int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main(){
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    cout << "The " << num << "th term of fibonacci series is: " << fib(num);
    return 0;
}