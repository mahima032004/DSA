#include<iostream>
#include<queue>
using namespace std;

int main() {
// sabse phle input string

    string str = "aac";

// create an array to keep tarck of kitne times konsa char aa chuka
    int arr[26] = {0};

// ans dekhne k liye ek queue
    queue<char>q;

    for(int i =0; i< str.size(); i++) {
        int curr = str[i];
        // sabse phle uski freq incraese
        arr[curr - 'a']++;

        // phir use queue me push
        q.push(curr);

      while(!q.empty()) {
        if(arr[q.front()-'a'] > 1) {
            q.pop();
        }
        else {
            cout << q.front();
            break;
        }
      }

    //  q se bahar in two cases - ans mil gaya or q khali hogyi, so agar q khali then print something random
      if(q.empty()) cout << '$';
    }
    return 0;
    }





