#include <iostream>
#include <vector>
using namespace std;

int kadane(vector<int>& arr) {
    // Step 1: Start with the first element as the current and maximum sum
    int current_sum = arr[0];
    int max_sum = arr[0];

    // Step 2: Traverse the array from the second element
    for (int i = 1; i < arr.size(); i++) {

        // Step 3: Decide whether to continue the current subarray
        // or start a new one from current element
        current_sum = max(arr[i], current_sum + arr[i]);

        // Step 4: Update max_sum if current_sum is greater
        max_sum = max(max_sum, current_sum);
    }

    // Step 5: Return the maximum subarray sum found
    return max_sum;
}



int main() {
    // Example input
    vector<int> arr = {4, -6, 3, -1, 5};

    // Call the function and print the result
    int result = kadane(arr);
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
