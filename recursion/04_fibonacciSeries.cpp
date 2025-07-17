// #include<iostream>
// using namespace std;

// int main() {
//     int n = 8;

//     int t1 = 0;
//     int t2 = 1;
//     cout << t1 << endl << t2 << endl;

//     for(int i = 2; i< n; i++) {
//         int next = t1 + t2;
//         t1 = t2;
//         t2 = next;
//         cout << next << endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int fib(int n) {
    if(n == 0) return 0;
    if(n==1) return 1;
    
    return fib(n-1)+fib(n-2);
    }
    

int main() {
    int n = 5;
    int ans = fib(n);
    for(int i =0; i<n; i++) {
        // caaling fib function for every i value
        cout << fib(i) << endl;
    }
   
    return 0;
}