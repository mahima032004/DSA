#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums{9,10,11,2,3,4,5,6};
    int size = nums.size();
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;

    while(start <= end) {
        if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1])  {cout << nums[mid] << endl;
                                                                 return 0;
                                                                 }

        else if(nums[mid] < nums[start] ) end = mid;
        else start = mid;
        mid = start + (end-start)/2;


    }

    

    return 0;
}