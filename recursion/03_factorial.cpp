#include<iostream>
using namespace std;

int factorial(int n ) {
    if( n == 1) return 1;

    int temp = n*factorial(n-1);
    return temp;
}

int main() {
    int n = 5;
    int ans = factorial(n);
    cout << "factorial of 5 is " << ans << endl;
    return 0;
}