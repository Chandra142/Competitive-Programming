// FIND INORDER, PREORDER, POSTORDER of this tree .
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
}*root = NULL;

node *addNode(int data){
    node *newnode = new node;
    newnode -> data = data;
    newnode -> left = NULL;
    newnode -> right = NULL;
    return newnode;

}
void inorder(node *root){
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    cout<<root -> data <<" ";
    inorder(root -> right);
    
}
int main(){
    root = addNode(7);
    root -> right = addNode(9);
    root -> right -> left = addNode(8);
    root -> right -> left -> left = addNode(2);
    root -> right -> left -> right = addNode(10);
    root -> right -> left -> left = addNode(7);
    return 0;
    /*
        7
         \
          9
         /
        8
       / \
      2   10
     /
    7        
            */
    
}

/*Level order 
1. BFS
2. DFS -> INORDER ->>    ROOT , LEFT , RIGHT 
       -> PREORDER ->>   LEFT , ROOT , RIGHT
       -> POSTORDER ->>  LEFT , RIGHT, ROOT

*/