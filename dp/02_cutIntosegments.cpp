#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// int solve(int n, int x, int y, int z, vector<int>& dp) {
//     if (n == 0) return 0;  // Base case: no length to cut
//     if (n < 0) return INT_MIN;  // Invalid case: negative length

//     // Check if result is already calculated
//     if (dp[n] != -1) return dp[n];

//     // Try cutting with x, y, and z
//     int a = solve(n - x, x, y, z, dp) + 1;
//     int b = solve(n - y, x, y, z, dp) + 1;
//     int c = solve(n - z, x, y, z, dp) + 1;

//     // Store the result
//     dp[n] = max(a, max(b, c));
//     return dp[n];
// }

int main() {
    int n = 4, x = 2, y = 1, z = 1;

    // // Initialize memoization table
    // vector<int> dp(n + 1, -1);

    // int ans = solve(n, x, y, z, dp);
    // if (ans < 0)
    //     cout << "0" << endl;
    // else
    //     cout << ans << endl;

    // return 0;




    // ********by tabulisation*******
    vector<int>dp(n+1,INT_MIN);

    dp[0] = 0;

    for(int i = 1; i <=n ;i++) {

        if(i-x >= 0) dp[i] = max(dp[i],dp[i-x] +1);
        if(i-y >=0) dp[i] = max(dp[i],dp[i-y]+1);
        if(i-z >=0) dp[i] = max(dp[i], dp[i-z] +1);
    }

    cout << dp[n] << endl;

    return 0 ;
}
