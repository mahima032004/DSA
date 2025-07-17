#include<iostream>
using namespace std;

void  printAllSub(string s, string ans,int i) {
   if(i == s.size()) {
       cout << ans << endl;
       return;
   } 

//    exclude first
  printAllSub(s,ans,i+1);

//   include
ans.push_back(s[i]);
printAllSub(s,ans,i+1);

}

int main() {
    string s = "abc";
    string ans = "";
                        
    int i =0;
    printAllSub(s,ans,i);
    return 0;
}


