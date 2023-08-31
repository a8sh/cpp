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

int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    return 0;
}