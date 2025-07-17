// // // #include<iostream>
// // // using namespace std;

// // // int fib(int n) {
// // //     if(n==0) return 0;
// // //     if(n == 1) return 1;

// // //     return fib(n-1) + fib(n-2);
// // // }

// // // int main() {
// // //     int n = 5;
// // //      for(int i = 0; i < 5 ;i ++) {
// // //         cout << fib(i);
// // //      }

// // //      return 0;

    
// // // }

// // // #define MOD 1000000007

// // // long long int solve(long long int n,vector<long long int >&dp) {
// // //     if(n==1) return 0;
// // //     if(n==2) return 1;
// // //     if(dp[n] != -1) return dp[n];

// // //     dp[n] = (n-1)%MOD*((solve(n-1,dp))%MOD + (solve(n-2,dp))%MOD);

// // //     return dp[n];
// // // }

// // // long long int countDerangements(int n) {
// // //     // Write your code here.
    
// // //     vector<long long int >dp(n+1,-1);
// // //     long long int  ans = solve(n,dp);

// // //     return ans%MOD;
// // // }


// // #include<iostream>
// // #include<vector>
// // #include<limits.h>
// // using namespace std;

// // int solve(int n,vector<int>&days, vector<int>&cost, int index,vector<int>&dp) {

// //     // BASE CASE
// //     if(index >= n) return 0;
// //     if(dp[index] != -1) return dp[index];

// //     // 1 wala case
// //     int ans1 = cost[0] + solve(n,days,cost,index+1,dp);

// //     // week wala case, phle index ko vaha tak leke jo
// //     int i;
// //     for(i = index; i < n && days[i] < days[index] + 7; i++);
// //     int ans2 = cost[1]+solve(n,days,cost,i,dp);

// //     // month wala case
// //     for(i = index; i < n && days[i] < days[index] + 30;i++);

// // //     int ans3 = cost[2] + solve(n, days,cost,i,dp);

// // //     dp[index] = min(ans1, min(ans2,ans3));
// // //     return min(ans1, min(ans2,ans3));
// // // }

// // // int solveTab(int n,vector<int>&days, vector<int>&cost) {

// // //     // BASE CASE
// // //     // if(index >= n) return 0;
// // //     // if(dp[index] != -1) return dp[index];

// // //     vector<int>dp(n+1,INT_MAX);

// // //     dp[n] = 0;

// // //     for(int i = n-1; i >=0; i--) {

// // //         int ans1 = cost[0] + dp[i+1];
         

// // //     // week wala case, phle index ko vaha tak leke jo 
// // //     int k;
// // //     for(k = i; k < n && days[k] < days[i] + 7; k++);
// // //     int ans2 = cost[1]+dp[k];

// // //     // month wala case
// // //     for(k = i; k < n && days[k] < days[i] + 30;k++);

// // //     int ans3 = cost[2] + dp[k];
// // //     dp[i] = min(ans1, min(ans2,ans3));


        
// // //     }
// // //     return dp[0];

    
    
// // // }

// // // int main(){
// // //     vector<int>days{2,5};
// // //     vector<int>cost{1,4,25};
// // //     int n = 2;
// // //     // vector<int>dp(n+1,-1);

// // //     // cout << solve(n,days,cost,0,dp) << endl;
// // //     cout << solveTab(n,days,cost) <<endl;
// // //     return 0;
// // // }

// // // #include<iostream>

// // // using namespace std;

// // // int main() {
// // //     int i;
// // //     for( i = 0; i < 4; i++) {

// // //     }
// // //     cout << i;
// // // }

// // #include<iostream>
// // #include<vector>
// // #include<queue>
// // #include<limits.h>
// // using namespace std;

// // int main(){
// //     vector<int>days{2,5};
// //     vector<int>cost{1,4,25};
// //     int n = 2;
    
// //     queue<pair<int,int>>weekly;
// //     queue<pair<int,int>>monthly;

// //     int ans = 0;

// //     for( auto day:days) {
// //         // faaltu ko remove sabse phle
// //         while(!weekly.empty() && weekly.front().first + 7 <= day ) weekly.pop();

// //         while(!monthly.empty() && monthly.front().first + 30 <= day) monthly.pop();

// //         weekly.push(make_pair(day,cost[1] + ans));

// //         monthly.push(make_pair(day, cost[2] + ans));

// //         ans = min(ans + cost[0], min(weekly.front().second, monthly.front().second));
        
// //     }

// //     cout << ans << endl;



// //     return 0;
// // }
// #include <stdio.h>

// int sumAvg(int arr[], int n);

// int main() {
//     int n;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     printf("Size of array is: %d\n", n);

//     int fun[n];

//     for (int i = 0; i < n; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &fun[i]);
//     }

//     int sum = sumAvg(fun, n);
//     float average = (float)sum / n;

//     printf("Sum is: %d\n", sum);
//     printf("Average is: %.2f\n", average);

//     return 0;
// }

// int sumAvg(int arr[], int n) {
//     int sum = 0;

//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }

//     return sum;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sortFunction(vector<vector<int>>&nums) {
    sort(nums.begin(), nums.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0]; // Compare the first column
    });
    
    vector<int>arr;
    for(int i =0; i < nums.size(); i++) {
        arr.push_back(nums[i][1]);
    }
}

int main() {
    // vector<int>nums{5,7,1,2,3,9};
    // int n = nums.size();

    // vector<int>ans(n);
    // ans.push_back(nums[0]);
    // int last = nums[0];

    // for(int i = 1;i < n; i++) {
    //     if(nums[i] > last) {
    //         ans.push_back(nums[i]);
    //         last = nums[i];
    //     }
    //     else {
    //         int index = lower_bound(ans.begin(),ans.end(),nums[i]) - ans.begin();
    //         ans[index] = nums[i];
    //     }
    // }

    // vector<int>nums{1,3,5};

    // int index = lower_bound(nums.begin(), nums.end(),5) - nums.begin();
    
    // cout << index << endl;

    // return 0;

    
}

