#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* createTree(){
    int d;
    cin>>d;
    if(d == -1){
        return NULL;
    }
    node* root = new node(d);
    root->left = createTree();
    root->right = createTree();
    return(root);
}

int replaceWithSum(node* root){
    if(root == NULL){
        return(0);
    }
    if(root->left == NULL and root->right == NULL){
        return(root->data);
    }
    int newData;
    newData = replaceWithSum(root->left) + replaceWithSum(root->right);
    root->data += newData;
    return(root->data);
}

void preOrder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    node* root = createTree();
    replaceWithSum(root);
    preOrder(root);
}