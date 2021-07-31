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

void rightView(node* root, int height){
    static int maxLevel = -1;
    if(root == NULL){
        return;
    }
    if(height>maxLevel){
        cout<<root->data<<endl;
        maxLevel++;
    }
    rightView(root->right, height+1);
    rightView(root->left, height+1);
}

int main(){
    node* root = buildTree();
    rightView(root, 0);
}