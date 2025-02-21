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
    int calcHeight(TreeNode* root){
        if(root == NULL){
            return 0 ;
        }
        return max(calcHeight(root->left) , calcHeight(root->right))+1 ;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int lHeight = calcHeight(root->left);
        int rHeight = calcHeight(root->right);
        
        int currDiameter = lHeight + rHeight ;
        int lDiameter=diameterOfBinaryTree(root->left);
        int rDiameter=diameterOfBinaryTree(root->right);
        return max(currDiameter , max(lDiameter , rDiameter)) ;
        
        
    }
};
