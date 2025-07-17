#include<iostream>
using namespace std;

void printCounting(int n) {
    // base case
    if( n == 0) {
         cout << "when returning" << endl;
         return;
    }

    cout << n << endl;
    printCounting(n-1);
   
    cout << n << endl;
}

int main() {
    int n = 9;
    printCounting(n);
    return 0;
}