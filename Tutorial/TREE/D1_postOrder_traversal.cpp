#include <bits/stdc++.h>
using namespace std;

// Building binary tree node
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
//Building tree 
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

// postorder traversal
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root -> data<< " ";

}
int main()
{
    vector<int> treeData= {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildtree(treeData); //build tree

    postOrder(root); // Calling to print the tree
    cout << endl;
    return 0;
}