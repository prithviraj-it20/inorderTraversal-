/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>l;
    void inorder(TreeNode*root){

    if(root==NULL) return;

    if(root->left){inorder(root->left);}

    l.push_back(root->val);

    if(root->right){inorder(root->right);}

}
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return l;
    }
};
