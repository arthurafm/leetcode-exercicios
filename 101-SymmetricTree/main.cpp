#include <iostream>

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution{
public:
    bool simetrico(TreeNode* esq, TreeNode* dir){
        if((esq == nullptr) && (dir == nullptr)){
            return true;
        }
        else{
            if((esq == nullptr) || (dir == nullptr)){
                return false;
            }
            else{
                if(esq->val == dir->val){
                    return simetrico(esq->left, dir->right) && simetrico(esq->right, dir->left);
                }
                else{
                    return false;
                }
            }
        }
    }

    bool isSymmetric(TreeNode *root){
        if(root == nullptr){
            return true;
        }
        else{
            return simetrico(root->left, root->right);
        }
    }
};

int main(){
    Solution a;
    TreeNode *raiz = new TreeNode, *l1 = new TreeNode, *l2 = new TreeNode, *l3 = new TreeNode, *r1 = new TreeNode, *r2 = new TreeNode, *r3 = new TreeNode;
    raiz->val = 1;
    raiz->left = l1;
    raiz->right = r1;
    l1->val = 2;
    l1->left = l2;
    l1->right = l3;
    l2->val = 3;
    l2->left = nullptr;
    l2->right = nullptr;
    l3->val = 4;
    l3->left = nullptr;
    l3->right = nullptr;
    r1->val = 2;
    r1->left = r2;
    r1->right = r3;
    r2->val = 4;
    r2->left = nullptr;
    r2->right = nullptr;
    r3->val = 3;
    r3->left = nullptr;
    r3->right = nullptr;

    std::cout << (a.isSymmetric(raiz) ? "True" : "False");

    return 0;
}
