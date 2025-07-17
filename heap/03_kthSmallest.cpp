#include<iostream>
#include<vector>
using namespace std;

void buildHeap(vector<int>&arr, int i , int k) {
    int largest = arr[i];
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if(left < k && arr[left] > arr[largest]) largest = left;
    if(right < k && arr[right] > arr[largest] ) largest = right;

    if(largest != i) {
        swap(arr[largest],arr[i]);
        i = largest;
        buildHeap(arr,i,k);
    }
}

int main() {
    vector<int>arr{7,10,4,20,15};

    int k = 4;
    int i = 0;
    int orgK = k;
    while( i < k) {
        buildHeap(arr,i,k);
        i++;
    }

    for(int j =0; j < orgK; j++) {
        if(arr[j] < arr[0]) {
            arr[0] = arr[j];
            buildHeap(arr,0,arr.size());
        }
    }

    cout << "kth smallest element in given array is " << arr[0] << endl;

    return 0;

    // build max heap of first k element

}