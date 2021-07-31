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

node* buildTree(){
    int d;
    cin>>d;
    if(d == -1){
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return(root);
}

int sumOfNodes(node* root){
    if(root==NULL){
        return(0);
    }
    int sum = root->data;
    sum += sumOfNodes(root->left);
    sum += sumOfNodes(root->right);
    return(sum);
}

int main(){
    node* root = buildTree();
    cout<<sumOfNodes(root)<<endl;
    cout<<sumOfNodes(NULL);
}