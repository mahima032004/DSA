// #include<iostream>
// using namespace std;


// void inOrder(Node *root) {

//     Node *curr = root;

//     while(curr) {
//         // left not exists
//         if(!curr->left) {
//             cout << curr->data << endl;
//             curr = curr->right;
//         }

//         // left not exists
//         else {
//             // no thread
//             Node *pre = curr->left;
//             while(pre->right && pre->right != curr) {
//                 pre = pre->right;
//             }
//             if(pre->right == NULL) {
//                 pre->right = curr;
//                 curr = curr->left;
//             }
//             else {
//                 cout << curr->data;
//                 pre->right = NULL;
//                 curr = curr->right;
//             }


            // already threaded
        // }
    // }
// }