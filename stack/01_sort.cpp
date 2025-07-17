// #include<iostream>
// #include<stack>
// using namespace std;

// void solve2(stack<int>&st,int element) {
//     if(st.empty()) {
//         st.push(element);
//         return;
//     }
//     int e = st.top();
//     if(element > e) {
//         st.pop();
//         solve(st,element);
//     }
//     else {
//         st.push(element);
//         return;
//     }
// }

// void solve(stack<int>&st) {
//     if(st.empty()) return;

//     int element = st.top();
//     st.pop();
//     solve(st);

//     if(element  > st.top()) {
//         solve2(st,element);
//     }
//     else {
//         st.push(element);
//     }
// }

// int main() {
//     stack<int>st;
//     st.push(2);
//     st.push(4);
//     st.push(3);
//     st.push(5);

//     solve(st);

//     while(!st.empty()) {
//         cout << st.top() << endl;
//         st.pop();
//     }

//     return 0;
// }