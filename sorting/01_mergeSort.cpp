#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;
    vector<int> leftArr(n1), rightArr(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) leftArr[i] = arr[start + i];
    for (int i = 0; i < n2; i++) rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = start;

    // Merge the temporary arrays back into the main array
    while (i < n1 && j < n2) {
        if (rightArr[j] > leftArr[i]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++; // Increment `j` here
        }
        k++;
    }

    // Copy remaining elements of leftArr, if any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy remaining elements of rightArr, if any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    vector<int> arr{3, 2, 4, 5, 1};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (auto i : arr) cout << i << " ";
    return 0;
}
