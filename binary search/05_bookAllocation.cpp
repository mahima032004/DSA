#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate
#include <algorithm> // For std::max
using namespace std;

bool ispossible(vector<int> nums, int mid, int s) {
    int pages = 0;
    int currS = 1; // Current number of students

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > mid) return false; // If a single book has more pages than mid

        pages += nums[i];
        if (pages > mid) {
            currS++;
            pages = nums[i];
        }
        if (currS > s) return false;
    }
    return true;
}

int solve(vector<int> nums, int total, int s) {

    int start = *max_element(nums.begin(), nums.end()); // Minimum possible value
    int end = accumulate(nums.begin(), nums.end(), 0); // Sum of all pages
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (ispossible(nums, mid, s)) {
            ans = mid; // Update answer
            end = mid - 1; // Try to minimize further
        } else {
            start = mid +1;
        }
    }

    return ans;
}

int main() {
    vector<int> nums{12, 34, 67, 90};
    int s = 2; // Number of students

    int total = accumulate(nums.begin(), nums.end(), 0); // Total pages
    int ans = solve(nums, total, s);
    cout << "The minimum number of pages a student has to read is " << ans << endl;

    return 0;
}
