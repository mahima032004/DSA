#include<iostream>

#include<vector>
using namespace std;
 int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int deficit = 0;
        int start = 0;
        int balance = 0;

        for (int i =0;i < gas.size(); i++) {
            balance += gas[i] - cost[i];

            if(balance<0) {
                start = i+1;

                // yahi par galti hoti hai, plus krna bhul jate h purane ko
                deficit += balance;
                balance = 0;
            }
           
        }
         if(balance + deficit >= 0 ) return start;
            else {
                return -1;
            }
        
    }
int main() {

    vector<int>gas{1,2,3,4,5};
    vector<int>cost{3,4,5,1,2};
    cout << canCompleteCircuit(gas,cost);

    return 0;

}