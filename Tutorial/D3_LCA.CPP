#include<iostream>
using namespace std;
//building tree node
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

//solutin start from here
class Solution{
    public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        //ye base case hai
        if(root == nullptr || root == p || root == q){
            return root;
        }

        //search left and right of the root
        TreeNode* leftLCA = lowestCommonAncestor(root -> left, p,q);
        TreeNode* rightLCA = lowestCommonAncestor(root -> right, p, q);

        //if both the sides are not null 
        if(leftLCA != nullptr && rightLCA !=nullptr){
            return root;
        }

        //otherwise return the non-null value;
        return(leftLCA != nullptr) ? leftLCA : rightLCA;

    }
};

int main(){
    /*
                   3  
                 /  \
               5     1
              / \   /  \
             6  2  0    8
               / \ 
              7   4 
    */
   TreeNode* root = new TreeNode(3);
   root ->left = new TreeNode(5);
   root ->right = new TreeNode(1);
   root ->left  ->left = new TreeNode(6);
   root ->left  ->right = new TreeNode(2);
   root ->right ->left = new TreeNode(0);
   root ->right ->right = new TreeNode(8);
   root ->left  ->right ->left = new TreeNode(7);
   root ->left  ->right ->right = new TreeNode(4);

   //Nodes to find LCA;
   TreeNode* p = root->left; // for node 5 
   TreeNode* q = root->left->right->right; // for node 4
   
   // CALLING FUNCTION
   Solution sol;
   TreeNode* lca = sol.lowestCommonAncestor(root,p,q);

   cout<<" LCA: "<<lca ->data<<endl;
}