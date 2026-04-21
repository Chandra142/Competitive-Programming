#include<bits/stdc++.h>
using namespace std;
class  Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
  Node* buildtree(vector <int> order){
    idx++;
    if(order[idx] == -1) return NULL;
    Node* root = new Node(order[idx]);
    root -> left = buildtree(order);
    root -> right = buildtree(order);
    return root;
  }
  int main(){
    vector <int> value = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildtree(value);
    cout<<root -> data<<endl;
    cout<<root -> left -> data<<endl;
    cout<<root -> right -> data<<endl;
    return 0;
  }