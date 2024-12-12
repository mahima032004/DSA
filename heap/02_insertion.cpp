#include<iostream>
using namespace std;

class heap {
    public:
    int arr[100];
    int size;

    heap() {
        size = 0;
    }

    void insert(int data) {
        // size update
        size = size+1;

        // insert the node at last
        arr[size] = data;

        // data ko sahi jagah lekek jana hai
        int index = size;

        while(index > 1) {
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex]) {
                swap(arr[index],arr[parentIndex]);
                index = parentIndex;
            }
            else {
                break;
            }
        }
    }


    void deletion() {
        // replace last node with root node value
        swap(arr[size],arr[1]);
        int i = 1;
        size--;
        while( i < size) {
            int largest = i;
            int left = 2*i ;
            int right = 2*i + 1;
            if(arr[left] > largest) largest = left;
            else if (arr[right] > largest) largest = right;
            else break;
            swap(arr[i], arr[largest]);
            i = largest;
        }

    }
    

};

int main() {
    heap h;

   h.arr[0] = -1;
   h.arr[1]= 100;

   h.arr[2]= 50;
   h.arr[3] = 60;
   h.arr[4] = 40;
   h.arr[5] = 45;
   h.size = 5;

//    before insertion
    for(int i =0; i  <= h.size;i++) {
        cout << h.arr[i] << " " ;
    } 
    cout << endl;
    h.insert(110);

    // after insertion
    for(int i =0; i<=h.size;i++) cout << h.arr[i] <<  " ";
    h.deletion();
    cout << endl;
    for(int i =0; i<=h.size;i++) cout << h.arr[i] <<  " ";

    return 0;

}