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

void printPre(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}

void printIn(node* root){
    if(root == NULL){
        return;
    }
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}

node* treeFromPre_In(int* pre, int* in, int s, int e){
    static int i = 0;
    if(s>e){
        return(NULL);
    }
    node* root = new node(pre[i]);
    int index = -1  ;
    for(int j=s;s<=e;j++){
        if(in[j]==pre[i]){
            index = j;
            break;
        }
    }
    i++;
    root->left = treeFromPre_In(pre, in, s, index-1);
    root->right = treeFromPre_In(pre, in, index+1, e);
    return(root);
}

int main(){
    int preOrder[] = {8, 10, 1, 6, 9, 7, 3, 14, 13};
    int inOrder[] = {1, 10, 9, 6, 7, 8, 3, 14, 13};
    node* root = treeFromPre_In(preOrder, inOrder, 0, 8);
    printPre(root);
    cout<<endl;
    printIn(root);
}