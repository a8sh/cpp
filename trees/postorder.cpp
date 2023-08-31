#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int k){
        data = k;
        right = NULL;
        left = NULL;
    }
};
void postorder(Node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    postorder(root);
    return 0;
}