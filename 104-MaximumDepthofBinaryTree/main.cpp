#include <iostream>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    int maxDepth(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        else{
            int depth_l, depth_r, saida;
            depth_l = maxDepth(root->left);
            depth_r = maxDepth(root->right);
            if(depth_l > depth_r){
                return (1+depth_l);
            }
            else{
                return (1+depth_r);
            }
        }
    }
};

int main(){

    return 0;
}
