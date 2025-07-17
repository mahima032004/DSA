#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node *left;
    node *right;

    node (int data) {
        this->data = data;
        this->left = NULL;
        this ->right = NULL;
    }
};

node *findPredecessor(node *root) {
    if(!root) return NULL;

    
}

node *deletion(node *root, int target) {
    if(root == NULL) return NULL;

    // /step 1 : find the target
    node *targetNode = NULL;
    // node *targetNode = findTarget(root, target);

    // case 1 : leaf node
    if(targetNode->left == NULL && targetNode->right == NULL) {
        delete targetNode;
        return NULL;
    }

    // case 2: left child present but right child not present
    else if(targetNode->left && targetNode->right == NULL) {
        node *temp = targetNode->left;
        delete targetNode;
        return temp;
    }

    else if(targetNode->right && targetNode ->left == NULL) {
        node *temp = targetNode->right;
        delete targetNode;
        return temp;
    }
    else {
        // find predecessor
        node *pre = findPredecessor(targetNode);
        targetNode->data = pre->data;
        deletion(root->left,pre->data);
    }
}

int main() {
    return 0;
}