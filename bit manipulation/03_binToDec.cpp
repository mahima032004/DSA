#include<iostream>
#include<cmath>
using namespace std;


int main() {
    string str = "1101";

    int ans = 0;

    int i = str.size() - 1;
    int po = 0;
    while (i >= 0) {
        int temp = str[i] - '0';
        ans += (temp*pow(2,po));
        po++;
        i--;
    }
    cout << ans << endl;
    return 0;
}