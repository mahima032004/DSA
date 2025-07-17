#include<bits/stdc++.h>
#include<stack>
using namespace std;

int findCelebrity(vector<vector<int>>&arr, int n) {
     
    //  step 1 : push all elements in stack
    stack<int>s;
    for(int i = 0; i<n; i++) {
    //   s.push(arr[i]);
    }
    
    while(!s.size() != 1) { 
        int a = s.top(); s.pop();
        int b = s.top(); s.pop();
        if(arr[a][b]) {
            // means a knows b
            s.push(b);
        }
        else {
            s.push(a);
        }
    }

    int mightAns = s.top();
    s.pop();

    for(int i =0; i<n; i++) {
        if(arr[mightAns][i] != 0) return -1;
    }
    for(int i =0; i<n; i++) {
        if(arr[i][mightAns] != 1 && i!= mightAns) return -1;
    }

    return mightAns;

}

int main() {

    vector<vector<int>>arr{
        {0,1,0},
        {0,0,0},
        {0,1,0}
    };

    int n = 3;
    int celebrity = findCelebrity(arr,n);
    cout << "celebrity in given is: " << celebrity << endl;

    return 0;


}
