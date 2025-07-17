#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums;
    nums = {2,1,0,1,1,2,0};

    // i for 0 and j for 1 and k for 2
    int i = 0;
    int j =0;
    int k = nums.size() -1;

    while(j<=k) {
        if(nums[j] == 0) {
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else if(nums[j] == 1) j++;
        else {
            swap(nums[j],nums[k]);
            k--;
        }
    }
    for(auto i : nums) cout << i << endl;
    return 0;
}
