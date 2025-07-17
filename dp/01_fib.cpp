#include<iostream>
using namespace std;

int fib(int n,int util[]) {
   if(n==0 || n==1) return n;

   //step 2 check util me phle se is call ka ans h kya
   if(util[n] != -1) return util[n];

   //step 1: store the ans of this call in util
   util[n] = fib(n-1,util)+ fib(n-2,util);

   return fib(n-1,util)+ fib(n-2,util);
}

int main() {
    int n = 5;
    int util[n+1] = {-1,-1,-1,-1,-1,-1};

    
    cout << fib(n,util) << endl;
    return 0;
}