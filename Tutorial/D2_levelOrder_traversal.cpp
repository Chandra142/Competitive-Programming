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

//Level Order Traversel
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL); // printing linewise/levelwise node 
    while(q.size() > 0 ){
        Node* curr = q.front();
        q.pop();
        //printting levelwise '1
        if(curr == NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
        // '1
        cout<<curr -> data << " ";
        if(curr -> left != NULL){
            q.push(curr -> left);
        }
        if(curr -> right != NULL){
            q.push(curr -> right);
        }
    }
    cout<<endl;
}
int main()
{
    vector<int> treeData= {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildtree(treeData); //build tree

    levelOrder(root); // Calling to print the tree
    // cout << endl;
    return 0;
}