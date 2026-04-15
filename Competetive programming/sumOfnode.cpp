#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left, *right;

} *root = NULL;
int sum;
int findsum(node *root)
{
    if (root == NULL)
    {
        return sum;
    }
    preorder(root, 0);
    return sum;
}
void preorder(node *root, int currNum)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        sum = sum + currNum * 10 + root->data;
        return;
    }
    preorder(root->left, currNum * 10 + root->data);
    preorder(root->right, currNum * 10 + root->data);
}

int main()
{
    node *root = new node(1);
    node *root = new node(1);
    node *root = new node(1);
    node *root = new node(1);
    int currNum;
    preorder(root, currNum, 0);
    cout << sum << " ";
}
