#include<iostream>
#include<vector>
using namespace std;


bool  isPalindrome(string s) {
    int i =0;
    int j = s.size() -1;

    while(i <= j) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string str = "abab";
    vector<string>ans;

    for(int i = 0; i < str.size(); i++) {
        string temp = "";
        for(int j = i; j < str.size(); j++) {
            temp.push_back(str[j]);
            ans.push_back(temp);
        }
    }

   

    int size = 0;
    string sky = "";
    
    for(auto i: ans) {
        string curr = i;
        if(isPalindrome(curr)) {
            int currSize = curr.size();
            int temp = max(size,currSize);
            if(temp == currSize) {
                sky = curr;
                size = temp;
            }
        }
    }
    cout << sky << endl;
    
    // string s = "";
    // int size = 0;
    // for(auto i : ans) {
    //     string curr = i;
    //     if(isPalindrome(curr)) {
    //         int currSize = curr.size();
    //         int temp = max(currSize, size);
    //         if(temp == currSize)  s = curr;
    //     }
    // }
    
   

    return 0;
}