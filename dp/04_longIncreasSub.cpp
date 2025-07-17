#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums{5,7,1,2,3,9};
    int n = nums.size();

    vector<int>ans;
    ans.push_back(nums[0]);
    
    // alag se ans array create krke agr current ans k last element se bada hai to s=ans me daal do, else uska
    // lower bound nikal se us index pe current element daal do
    for(int i = 1;i < n; i++) {
        if(nums[i] > ans.back()) {
            ans.push_back(nums[i]);
           
        }
        else {
            int index = lower_bound(ans.begin(),ans.end(),nums[i]) - ans.begin();
            ans[index] = nums[i];
        }
    }

    cout << "size of ans array is: " << ans.size() << endl;

    for(auto i: ans) cout << i << endl;

    

    return 0;

    
}

