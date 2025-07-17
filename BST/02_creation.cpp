#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node *right;
    node *left;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int main() {

}