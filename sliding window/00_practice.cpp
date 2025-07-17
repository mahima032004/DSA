#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums{2,2,2,1,2,2,1,2,2,2};

    for(auto i: nums) nums[i] = nums[i]%2;



    int l = 0;
    int r = 0;
    int ans = 0;
    int sum = 0;

    int k = 2;

    while(r < nums.size()){
        sum += nums[r];
        if(sum == k) {

            ans++;
            r++;
            
        }
        else if(sum > k) {
            sum -= nums[l];
            l++;
              }
        else {
                r++;
              }

    }


    cout << "ans is " << ans << endl;

    return 0;
}