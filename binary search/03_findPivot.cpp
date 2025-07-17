#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums{1,2,3,4,8,7,6};
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;

    //  sabme condition bhi check kr lena ki mid nums k amder hi lie kar rha h na  
    while(start <= end) {
        if(nums[mid] > nums[mid -1] && nums[mid] > nums[mid +1]) {
            cout << nums[mid] << endl;
            return 0;
        }
        else if(nums[mid] > nums[mid-1]) start = mid;
        else end = mid;
        mid = start + (end-start)/2;
    }
    return 0;
}