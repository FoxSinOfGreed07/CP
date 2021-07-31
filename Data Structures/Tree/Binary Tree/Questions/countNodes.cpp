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

int countNodes(node* root){
    if(root==NULL){
        return(0);
    }
    int totalNodes = 1;
    totalNodes += countNodes(root->left);
    totalNodes += countNodes(root->right);
    return(totalNodes);
}

int main(){
    node* root = buildTree();
    cout<<countNodes(root)<<endl;
    cout<<countNodes(NULL);
}