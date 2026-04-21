#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node *buildtree(vector<int> order)
{
    idx++;
    if (order[idx] == -1)
        return NULL;
    Node *root = new Node(order[idx]);
    root->left = buildtree(order);
    root->right = buildtree(order);
    return root;
}
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    vector<int> treeData = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildtree(treeData);  

    preorder(root); // calling function
    cout << endl;
    return 0;
}