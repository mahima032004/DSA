#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Index of the root
    int left = 2 * i + 1; // Left child
    int right = 2 * i + 2; // Right child

    // Check if left child is larger
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    // Check if right child is larger
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    // If the largest is not the root, swap and continue heapifying
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

int findKthMin(vector<int>& arr, int n, int k) {
    // Build a max heap for the first k elements
    for (int i = k / 2 - 1; i >= 0; i--) {
        heapify(arr, k, i);
    }

    // Process the remaining elements
    for (int i = k; i < n; i++) {
        if (arr[i] < arr[0]) {
            arr[0] = arr[i]; // Replace root with the new element
            heapify(arr, k, 0); // Rebuild the heap
        }
    }

    // The root of the heap is the k-th smallest element
    return arr[0];
}

int main() {
    vector<int> arr{7, 10, 4, 20, 15};
    int n = arr.size();
    int k = 4;

    int ans = findKthMin(arr, n, k);
    cout << "k-th smallest element in the array is " << ans << endl;

    return 0;
}
