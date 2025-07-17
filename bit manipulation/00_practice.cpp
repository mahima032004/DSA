#include<iostream>
using namespace std;

int main() {
   int x = 13;
   int i = 1;

   int temp = 1 << i;

   x = x|temp;

   cout << x;

   


    return 0;
}