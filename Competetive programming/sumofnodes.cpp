#include<bits/stdc++.h>
using namespace std;

int answer = -1;
int sum = 0, k = 4;
void preorder(node *root){
    if(root == NULL){
        return;
    }
    if(root -> left != NULL && root -> right == NULL){
        sum = sum + root -> data;
    }
    preorder(root -> left);
    preorder(root -> right);
}