#include<iostream>
using namespace std;
#include<queue>
#include<vector>



int main() {
     vector<int>arr{12,-1,-7,8,-15,3,16,28};

     int  k = 3; 
     queue<int>q;
    //  sabse phle ki window process
    for(int i= 0; i< k; i++) {
        if(arr[i] < 0) {
            q.push(i);
        }
    }

    for(int i = k; i<arr.size(); i++) {
        // last ka ans
        if(!q.empty()) {
            cout << arr[q.front()] << " ";
        }
        else {
            cout << 0 << " ";
        }

        // jitte elements out of window  h unhe hata dena
        if(!q.empty() && i - q.front() >= k) q.pop();
        if(arr[i] < 0) q.push(i);
    }

    // kyuki har ek window me uski last wali window ka ans print hota hai
    // so last wali window pe aane k baad last previous ka ans print hoga, isliye last ka ans alag se handle krna padega
     if(!q.empty()) {
            cout << arr[q.front()] << " ";
        }
        else {
            cout << 0 << " ";
        }

    return 0;
}