#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int>&s,int element) {
    if(s.empty()) {
        s.push(element);
        return;
    }

    int top = s.top();
    s.pop();
    insert_at_bottom(s,element);
    s.push(top);

}


int main() {
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    insert_at_bottom(s,4);
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}