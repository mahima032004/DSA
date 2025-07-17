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

void reverse_stack(stack<int>&s) {
    if(s.empty()) {
       return;
    }
    int element = s.top();
    s.pop();
    reverse_stack(s);
    insert_at_bottom(s,element);
    
    }

int main() {
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    reverse_stack(s);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}