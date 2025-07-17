#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums;
    nums = {1,2,3,3,3,4,4,5};
    int size = nums.size();

    int element = 4;
    int ans = -1;
    int start = 0;
    int end  = size -1;
    int mid = start + (end-start)/2;
    while(start < end) {
        if(nums[mid] == element ) {
            ans = mid;
            end = mid - 1;

        }
        else if(nums[mid] > element) end = mid-1;
        else start = mid + 1;
        mid = start + ( end- start)/2;
    }
    cout << ans << endl;
    return 0;
}