#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node (int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

void preOrder(Node *root, vector<int>&pre) {
    if(root == NULL) return;

    pre.push_back(root->data);
    preOrder(root->left,pre);
    preOrder(root->right,pre);
}


void createLL(vector<int>&pre,int i){
    if(i >= pre.size()-1)  
    return;

    
}

int main() {

    return 0;
}