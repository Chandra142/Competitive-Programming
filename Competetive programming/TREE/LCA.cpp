#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildtree(vector<int> order) {
    idx++;
    if (order[idx] == -1) return NULL;

    Node* root = new Node(order[idx]);
    root->left = buildtree(order);
    root->right = buildtree(order);

    return root;
}

Node* findLCA(Node* root, int n1, int n2) {
    if (root == NULL) return NULL;
    if (root->data == n1 || root->data == n2) return root;

    Node* leftLCA = findLCA(root->left, n1, n2);
    Node* rightLCA = findLCA(root->right, n1, n2);

    if (leftLCA && rightLCA) return root;
    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

int main() {
    vector<int> value = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildtree(value);

    int n1, n2;
    cin>>n1;
    cin>>n2;
    Node* lca = findLCA(root, n1, n2);

    if (lca != NULL)
        cout << lca->data;

    return 0;
}