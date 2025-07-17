#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    string s = "mahima";
    int n = s.size();

   unordered_map<char,int>mapping;

    for(auto i : s) mapping[i]++;

    for(auto i:mapping) {
        cout << i.first << "->" << i.second << endl;
    }   
    return 0;
    }

