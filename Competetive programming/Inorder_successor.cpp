#include <bits/stdc++.h>
using namespace std;

//     node *left,*right, *next;
// }*root = NULL;

// vector<node*> allnodes;
// int cnt;
// void inorder( node *root){
//     if(root ==NULL){
//         return;
//     }
//     inorder(root ->left);
//     allnodes.push_back(root);
//     inorder(root -> right);
// }

class node
{
public:
    int data;
    node *left;
    node *right;
    node *next;
    node *prev = NULL;

    node(int x)
    {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution
{
public:
    vector<node *> allnodes;
    int cnt;
    void inorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }
    }

    void fillSuccessor(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        fillSuccessor(root->left);
        root->next = allnodes[cnt + 1];
        cnt++;
        fillSuccessor(root->right);
    }
    void fillSuccessor(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        fillSuccessor(root->left);
        root->next = prev;
        prev = root;
    }
}

int
mai()
{
    // 4 5 6 7 8 9 12 14 10
    node *root = new node(4);
    root->left = new node(5);
    root->right = new node(6);
    root->left->left = new node(7);
    root->left->right = new node(8);
    root->right->left = new node(9);
    //    root ->right ->right = new TreeNode(8);
    root->left->left->left = new node(12);
    root->left->right->right = new node(4);
}