#include<iostream>
using namespace std;

int binary_search(int arr[] ,int n) {
    int start = 0;
    int end = 7;
    int mid = start + (end-start)/2;

    while(start<end) {
        if(arr[mid] == n) return mid;
        else if (arr[mid] < n) start = mid +1;
        else end = mid -1;
    }
    return -1;
}

int main() {
    int n;
    cout << "enter the number you wish to search" << endl;

    int arr[] = {10,20,30,40,50,60,70};

    int ans = binary_search(arr,n);

    cout << "index if searched element is " << ans << endl;
    return 0;
}