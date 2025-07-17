#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
    int data;
    node *left;
    node *right;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(node *root) {
    queue<node*>q;
    q.push(root);

    while(!q.empty()) {
        node *temp = q.front();
        q.pop();
        cout << temp->data;
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

void insertInBST(node *root,int data) {
       if(root == NULL) {
        root = new node(data);
        return;
       }

       if(root->data > data) insertInBST(root->left,data);
       else insertInBST(root->right,data);

}

void takeinput(node *&root) {
    int data;
    cin >> data;

    while(data != -1) {
        insertInBST(root,data);
        cin >> data;
    }
}

int main() {
    node *root = NULL;
    takeinput(root);
    levelOrderTraversal(root);
    return 0;

}