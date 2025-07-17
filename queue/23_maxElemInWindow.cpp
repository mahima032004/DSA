#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main() {
    vector<int>arr{1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    deque<int>q;

    // Step 1: Process the first window of size k
    for(int i = 0; i < k; i++) {
        while(!q.empty() && arr[q.back()] < arr[i]) 
            q.pop_back(); // Remove all elements smaller than current element
        q.push_back(i); // Add current element index to the deque
    }

    // Print the maximum for the first window
    cout << arr[q.front()] << " ";

    // Step 2: Process the rest of the array
    for(int i = k; i < arr.size(); i++) {
        // Remove elements that are out of this window
        while(!q.empty() && i - q.front() >= k) 
            q.pop_front();

        // Remove all elements smaller than the current one
        while(!q.empty() && arr[q.back()] < arr[i]) 
            q.pop_back();

        // Add the current element at the back of the deque
        q.push_back(i);

        // The element at the front is the largest in the current window
        cout << arr[q.front()] << " ";
    }

    return 0;
}
