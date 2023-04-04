#include <iostream>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution{
public:
    bool isSameTree(TreeNode *p, TreeNode *q){
        if((p == nullptr) && (q == nullptr)){
            return true;
        }
        else{
            if(((p == nullptr) && (q != nullptr)) || ((p != nullptr) && (q == nullptr))){
                return false;
            }
            else{
                if((p->val) != (q->val)){
                    return false;
                }
                if((isSameTree(p->left, q->left) == false) || (isSameTree(p->right, q->right)) == false){
                    return false;
                }
                else{
                    return true;
                }
            }
        }
    }
};

int main(){
    Solution a;
    auto *t1 = new TreeNode, *t2 = new TreeNode, *t3 = new TreeNode;
    t1->val = 1;
    t1->left = t2;
    t1->right = t3;
    t2->val = 2;
    t2->left = nullptr;
    t2->right = nullptr;
    t3->val = 3;
    t3->left = nullptr;
    t3->right = nullptr;
    auto *t4 = new TreeNode, *t5 = new TreeNode, *t6 = new TreeNode;
    t4->val = 1;
    t4->left = t5;
    t4->right = t6;
    t5->val = 2;
    t5->left = nullptr;
    t5->right = nullptr;
    t6->val = 3;
    t6->left = nullptr;
    t6->right = nullptr;
    cout << (a.isSameTree(t1, t4) ? "True" : "False");
    return 0;
}
