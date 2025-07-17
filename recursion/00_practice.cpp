#include<iostream>
using namespace std;

int solve(int num , int pow, int ans) {
    if(pow == 0) return ans;

    if(pow%2 == 0) {
        num = num*num;
        pow = pow/2;
    }
    else {
        ans = ans*num;
        pow = pow -1;
    }

    return solve(num,pow,ans);
}

int main() {
    int num = 2;

    int pow = 4;

    int ans = solve(num,pow,1);

   
    cout << ans << endl;
    
    return 0;


}