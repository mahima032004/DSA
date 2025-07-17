#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(int n,vector<int>&days, vector<int>&cost, int index,vector<int>&dp) {

    // BASE CASE
    if(index >= n) return 0;
    if(dp[index] != -1) return dp[index];

    // 1 wala case
    int ans1 = cost[0] + solve(n,days,cost,index+1,dp);

    // week wala case, phle index ko vaha tak leke jo
    int i;
    for(i = index; i < n && days[i] < days[index] + 7; i++);
    int ans2 = cost[1]+solve(n,days,cost,i,dp);

    // month wala case
    for(i = index; i < n && days[i] < days[index] + 30;i++);

    int ans3 = cost[2] + solve(n, days,cost,i,dp);

    dp[index] = min(ans1, min(ans2,ans3));
    return min(ans1, min(ans2,ans3));
}

int solveTab(int n,vector<int>&days, vector<int>&cost) {

    // BASE CASE
    // if(index >= n) return 0;
    // if(dp[index] != -1) return dp[index];

    vector<int>dp(n+1,INT_MAX);

    dp[n] = 0;

    for(int i = n-1; i >=0; i--) {

        int ans1 = cost[0] + dp[i+1];
         

    // week wala case, phle index ko vaha tak leke jo 
    int k;
    for(k = i; k < n && days[k] < days[i] + 7; k++);
    int ans2 = cost[1]+dp[k];

    // month wala case
    for(k = i; k < n && days[k] < days[i] + 30;k++);

    int ans3 = cost[2] + dp[k];
    dp[i] = min(ans1, min(ans2,ans3));


        
    }
    return dp[0];

    
    
}

int main(){
    vector<int>days{2,5};
    vector<int>cost{1,4,25};
    int n = 2;
    // vector<int>dp(n+1,-1);

    // cout << solve(n,days,cost,0,dp) << endl;
    cout << solveTab(n,days,cost) <<endl;
    return 0;
}